const files = ["a", "b", "c", "d", "e", "f", "g", "h"];
const ranks = ["8", "7", "6", "5", "4", "3", "2", "1"];

const boardEl = document.getElementById("board");
const statusEl = document.getElementById("status");
const statusDetailEl = document.getElementById("statusDetail");
const logEl = document.getElementById("log");
const pieceSelect = document.getElementById("pieceSelect");
const squareInput = document.getElementById("squareInput");
const moveBtn = document.getElementById("moveBtn");
const detectBtn = document.getElementById("detectBtn");

let selectedPieceId = null;
let pieces = [];

const pieceMap = [
  { id: 309, label: "R", square: "a1", color: "white" },
  { id: 311, label: "N", square: "b1", color: "white" },
  { id: 313, label: "B", square: "c1", color: "white" },
  { id: 315, label: "Q", square: "d1", color: "white" },
  { id: 316, label: "K", square: "e1", color: "white" },
  { id: 314, label: "B", square: "f1", color: "white" },
  { id: 312, label: "N", square: "g1", color: "white" },
  { id: 310, label: "R", square: "h1", color: "white" },
  { id: 209, label: "R", square: "a8", color: "black" },
  { id: 211, label: "N", square: "b8", color: "black" },
  { id: 213, label: "B", square: "c8", color: "black" },
  { id: 215, label: "Q", square: "d8", color: "black" },
  { id: 216, label: "K", square: "e8", color: "black" },
  { id: 214, label: "B", square: "f8", color: "black" },
  { id: 212, label: "N", square: "g8", color: "black" },
  { id: 210, label: "R", square: "h8", color: "black" },
];

const pawnSquares = files.map((file) => `${file}2`);
const blackPawnSquares = files.map((file) => `${file}7`);

for (let i = 0; i < 8; i++) {
  pieceMap.push({ id: 301 + i, label: "P", square: pawnSquares[i], color: "white" });
  pieceMap.push({ id: 201 + i, label: "P", square: blackPawnSquares[i], color: "black" });
}

pieces = pieceMap;

function initBoard() {
  boardEl.innerHTML = "";
  ranks.forEach((rank, rowIdx) => {
    files.forEach((file, colIdx) => {
      const square = `${file}${rank}`;
      const squareEl = document.createElement("div");
      squareEl.className = "square" + ((rowIdx + colIdx) % 2 ? " dark" : "");
      squareEl.dataset.square = square;
      squareEl.addEventListener("click", () => handleSquareClick(square));
      boardEl.appendChild(squareEl);
    });
  });
  renderPieces();
}

function renderPieces() {
  boardEl.querySelectorAll(".piece").forEach((node) => node.remove());
  pieces.forEach((piece) => {
    const square = piece.square;
    if (!square) {
      return;
    }
    const fileIndex = files.indexOf(square[0]);
    const rankIndex = ranks.indexOf(square[1]);
    if (fileIndex < 0 || rankIndex < 0) {
      return;
    }

    const pieceEl = document.createElement("div");
    pieceEl.className = `piece ${piece.color}`;
    pieceEl.textContent = `${piece.label} ${piece.id}`;
    pieceEl.style.gridColumn = fileIndex + 1;
    pieceEl.style.gridRow = rankIndex + 1;
    pieceEl.dataset.id = piece.id;
    if (piece.id === selectedPieceId) {
      pieceEl.classList.add("selected");
    }
    pieceEl.addEventListener("click", (event) => {
      event.stopPropagation();
      selectPiece(piece.id);
    });
    boardEl.appendChild(pieceEl);
  });
}

function selectPiece(id) {
  selectedPieceId = id;
  pieceSelect.value = String(id);
  renderPieces();
  setStatus("Piece selected", `Aruco ${id} ready. Choose a target square.`);
}

function handleSquareClick(square) {
  if (!selectedPieceId) {
    setStatus("Select a piece first", "Click a piece or choose one from the list.");
    return;
  }
  squareInput.value = square;
  sendMove(selectedPieceId, square);
}

function populatePieceSelect() {
  pieceSelect.innerHTML = "";
  pieces
    .slice()
    .sort((a, b) => a.id - b.id)
    .forEach((piece) => {
      const option = document.createElement("option");
      option.value = piece.id;
      option.textContent = `${piece.id} (${piece.color} ${piece.label})`;
      pieceSelect.appendChild(option);
    });
  pieceSelect.addEventListener("change", (event) => {
    selectPiece(Number(event.target.value));
  });
}

function addLogEntry(text) {
  const entry = document.createElement("div");
  entry.className = "log-entry";
  entry.textContent = text;
  logEl.prepend(entry);
}

function setStatus(title, detail) {
  statusEl.textContent = title;
  statusDetailEl.textContent = detail;
}

async function sendMove(arucoId, targetSquare) {
  setStatus("Moving...", `Aruco ${arucoId} -> ${targetSquare}`);
  moveBtn.disabled = true;
  try {
    const res = await fetch("/api/move", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ aruco_id: arucoId, target_square: targetSquare }),
    });
    const data = await res.json();
    if (data.success) {
      const piece = pieces.find((p) => p.id === arucoId);
      if (piece) {
        piece.square = targetSquare;
        renderPieces();
      }
      setStatus("Move complete", data.message || "Success");
      addLogEntry(`Moved ${arucoId} -> ${targetSquare}`);
    } else {
      setStatus("Move failed", data.message || "Unknown error");
      addLogEntry(`Failed ${arucoId} -> ${targetSquare}: ${data.message || "error"}`);
    }
  } catch (err) {
    setStatus("Move failed", "Network error");
  } finally {
    moveBtn.disabled = false;
  }
}

async function detectPieces() {
  detectBtn.disabled = true;
  setStatus("Detecting...", "Requesting piece detection from sensing module.");
  try {
    const res = await fetch("/api/detect", { method: "POST" });
    const data = await res.json();
    if (data.success) {
      setStatus("Detection complete", data.message || "OK");
      addLogEntry("Detect pieces: success");
    } else {
      setStatus("Detection failed", data.message || "Unknown error");
      addLogEntry(`Detect pieces failed: ${data.message || "error"}`);
    }
  } catch (err) {
    setStatus("Detection failed", "Network error");
  } finally {
    detectBtn.disabled = false;
  }
}

moveBtn.addEventListener("click", () => {
  const id = Number(pieceSelect.value);
  const square = squareInput.value.trim().toLowerCase();
  if (!id || square.length !== 2) {
    setStatus("Invalid input", "Select a piece and enter a square like e4.");
    return;
  }
  selectPiece(id);
  sendMove(id, square);
});

detectBtn.addEventListener("click", detectPieces);

populatePieceSelect();
initBoard();

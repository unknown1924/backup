let canvas = document.querySelector("canvas");
canvas.width = window.innerWidth;
canvas.height = window.innerHeight;

let c = canvas.getContext("2d");
c.fillRect(100, 200, 100, 100);
c.fillRect(100, 300, 100, 100);
c.fillRect(200, 100, 100, 100);
console.log("canvas");

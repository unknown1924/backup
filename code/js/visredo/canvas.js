let canvas = document.querySelector('canvas');
canvas.width = window.innerWidth-100;
canvas.height = window.innerHeight-100;

let c = canvas.getContext('2d');

let x = 200;
let y = 200;
let dx = 10;
let dy = 10;
function animate() {
    requestAnimationFrame(animate);
    c.clearRect(0, 0, canvas.width, canvas.height);
    c.beginPath();
    c.arc(x, y, 30, 0, 2*Math.PI);
    c.strokeStyle = 'blue';
    c.fillStyle = 'red';
    c.stroke();
    x+=dx;
    y+=dx;
    if(x+30 > canvas.width || x-30 < 0) {
        dx = -dx;
    }

    if(y+30 > canvas.width || y-30 < 0) {
        dy = -dy;
    }
}

console.log(window.innerHeight);
console.log(window.innerWidth);
animate();

let canvas = document.querySelector('canvas');
canvas.width = window.innerWidth-100;
canvas.height = window.innerHeight-100;

let c = canvas.getContext('2d');

let x = 100;
let y = 200;
let dx = 10;
let dy = 10;
let h = [];

function randomize() {
    for(let i = 0; i < 1000; i++){
         h.push(Math.floor(100*Math.random()));
         //h.push(100*Math.random());
    }
}

randomize();
//for(let i= 0; i < 1000; i++){
    //c.fillRect(x, y , 2, h[i]);
    //x += 4;
//}
let i = 0;
function animate() {
    requestAnimationFrame(animate);
    //c.clearRect(0, 0, canvas.width, canvas.height);
    //c.fillStyle = 'red';
    c.fillRect(x, y , 2, h[i]);
    i++;
    x += 4;
    //c.fillRect(x, y, 4, h[0]);
}

console.log(window.innerHeight);
console.log(window.innerWidth);
console.log(h);
console.log("helo world");

animate();

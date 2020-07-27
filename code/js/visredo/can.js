// @format
let canvas = document.querySelector("canvas");

canvas.width = window.innerWidth;
canvas.height = window.innerHeight;

let c = canvas.getContext("2d");
for(let i =0;i<10;i++){
console.log('hllo');
}
//function animate() {
    //requestAnimationFrame(animate);
    //c.fillRect(x, 200, 50, 50);
    ////c.beginPath();
    ////c.moveTo(x, 200);
    ////c.lineTo(x, 400);
    ////c.stroke();

    //x+=10;
    //if(x > 100){
        //c.clearRect(x-100, 200, 50, 50);
    //}
    //if(x > canvas.width - 100)
        //x = 0;
//}
function randomize() {
    for(let i = 0; i < 100; i++){
         x.push(Math.floor(900*Math.random()));
    }
}
let x = [];
randomize();
console.log(x);
randomize();
console.log(x);

function rain(x, y) {
    c.fillRect(x, y, 2, 4);
}
let y = 0;
let i = 0;
function animate() {
    requestAnimationFrame(animate);
    //rain(x[i], y);
    c.fillRect(x[i], y, 2, 4);
    i += 1;
    y += 1;
    if(y > 4){
        c.clearRect(x[i], y, 2, 4);
    }
}
//animate();

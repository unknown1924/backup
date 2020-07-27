let canvas = document.querySelector("canvas");
//innerWidth = window.innerWidth;
//innerHeight = window.innerHeight;
let innerWidth = 800;
let innerHeight = 800;

let c = canvas.getContext("2d");

function Circle(x, y, dx, dy, radius) {
    this.x = x;
    this.y = y;
    this.dx = dx;
    this.dy = dy;
    this.radius = radius;

    this.draw = function() {
        c.beginPath();
        c.arc(this.x, this.y, this.radius, 0, Math.PI * 2, false);
        c.strokeStyle = 'blue';
        c.stroke();
    }
    this.update = function() {
        //if (this.x + this.radius > innerWidth || this.x - this.radius < 0) {
            //this.dx = -this.dx;
        //}
        if(this.x + this.radius > 800)
            this.x = 0;
        if(this.y + this.radius > 400)
            this.y = 0;

        //if (this.y + this.radius > innerHeight || this.y - this.radius < 0) {
            //this.dy = -this.dy;
        //}

        this.x += this.dx;
        this.y += this.dy;

        this.draw();
    }
}

let circle = new Circle(10, 10, 3, 3, 30);
//circle.update();

//let x = Math.random() * innerWidth;
//let y = Math.random() * innerWidth;
//let dx = (Math.random()) * 8;
//let dy = (Math.random()) * 8;
//let radius = 30;

function animate() {
    requestAnimationFrame(animate);
    c.clearRect(0, 0, innerWidth, innerHeight);

    circle.update();
}
animate();

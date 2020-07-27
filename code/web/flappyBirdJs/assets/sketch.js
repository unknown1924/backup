var bird;
var pipes = [];
function setup() {
    createCanvas(400, 600);
    bird = new Bird();
    pipes.push(new Pipe());
}

function draw() {
    background(0, 0, 50);
    bird.update();
    bird.show();

    for (var i = pipes.length-1; i >= 0 ; i--){
        pipes[i].show();
        pipes[i].update();

        if(pipes[i].offscreen()) {
            pipes.splice(i, 1);
        }

        if(pipes[i].hits(bird)) {
            console.log("GAME OVER!");
        }
    }

    if(frameCount % 200 == 0){
        pipes.push(new Pipe());
    }

}

function keyPressed() {
    if (key == ' ') {
        bird.up();
    }
}

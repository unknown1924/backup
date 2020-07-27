let n = 3;
let clist = [1, 1, 10, 2, 1, 10, 0, 1.5, 10, 0, 1.5, 9, 0, 2, 9];

function makeCoordninates(clist) {
    let coord = [];
    for (let i = 0; i < clist.length; i = i + 3) {
        let temp = [0.0, 0.0, 0.0];
        temp[i] = clist[i];
        temp[i + 1] = clist[i + 1];
        temp[i + 2] = clist[i + 2];
        coord.push([temp[i], temp[i + 1], temp[i + 2]]);
    }
    /*console.log(coordinates[0]);*/
    return coord;
}

function calcDistance(a, b) {
    // check if on same surface
    let sameSurface = false;
    if (a[0] == b[0] || a[1] == b[1] || a[2] == b[2]) {
        sameSurface = true;
    }

    let r = Math.sqrt(
        Math.pow(a[0] - b[0], 2) +
            Math.pow(a[1] - b[1], 2) +
            Math.pow(a[2] - b[2], 2)
    );
    console.log(r);
    if (sameSurface) {
        let ans = (Math.PI * r) / 3;
        return ans.toFixed(2);
    } else {
        return r;
    }
}

let coordinates = makeCoordninates(clist);
console.log(coordinates);

let val = calcDistance(coordinates[1], coordinates[2]);
let val1 = calcDistance(coordinates[2], coordinates[3]);
console.log(val);
console.log(val1);

function totalDistance(coordinates) {
    let sum = 0.0;
    for (let i = 0; i < coordinates.length - 1; i++) {
        sum += calcDistance(coordinates[i], coordinates[i + 1]);
    }
    /*console.log(sum);*/
}

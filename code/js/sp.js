function psswd(n, password) {
    if (n <= 3) {
        return 6 - n;
    }
    let count = 0;
    if (password.match(/\d/) === null) {
        count++;
    }
    if (password.match(/[a-z]/) === null) {
        count++;
    }
    if (password.match(/[A-Z]/) === null) {
        count++;
    }
    if (password.match(/\W/) === null) {
        count++;
    }
    //if(password.match(/\W/) === null){ count++;}
    return count + n >= 6 ? count : 6 - n;
}
let p = "AUzs-nV";
let n = 7;
//console.log(psswd(n, p));
let x = Math.floor(3.4);

for (let i = 0; i < 10; i++) {
    for (let j = 0; j < 10; j++) {
        if (i == j || i == 9 - j) {
            console.log('*')
        }
    }
}

console.log('hello');

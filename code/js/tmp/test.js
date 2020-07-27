let arr = [2, 3, 6, 6, 5];
let l = arr[0];
let sl = 0;
//console.log(sl);
for (let i = 1; i < arr.length; i++) {
    if (arr[i] > l) {
        sl = l;
        l = arr[i];
        console.log(l + '   ' + sl);
    } else if (arr[i] < l && arr[i] >= sl) {
        sl = arr[i];
        console.log(l + '   ' + sl);
    }
}
let helloworld = 10;
console.log(sl);
console.log('helloworld')

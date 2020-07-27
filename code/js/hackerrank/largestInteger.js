function largestInt(a) {
    // convert to string for easy splitting into digits
    let digits = a.toString().split('');
    
    //sort in descending order
    digits.sort((a, b) => b - a);

    //join those reverse sorted num to string
    let num = digits.join('');

    //convert string back to integer
    console.log(parseInt(num));
}

let num = 1234;
largestInt(num);

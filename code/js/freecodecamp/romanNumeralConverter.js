function romanNumeral(num) {
  let roman = "";
  while (num > 0) {
    let ones = parseInt(num % 10);
    num = parseInt(num / 10);
    console.log(ones);
  }
  console.log(roman);
}

let num = 14;
romanNumeral(num);

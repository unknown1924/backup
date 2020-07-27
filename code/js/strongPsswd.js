function psswd(n, p) {
  let numbers = "0123456789";
  let lower_case = "abcdefghijklmnopqrstuvwxyz";
  let upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  let special_characters = "!@#$%^&*()-+";

  let sum = 0;
  let flags = [0, 0, 0, 0];
  let minInsArr = 0;

  for (let ep of p) {
    for (let en of numbers) {
      if (ep == en) {
        flags[0] = 1;
        break;
      }
    }
  }
  for (let ep of p) {
    for (let en of lower_case) {
      if (ep == en) {
        flags[1] = 1;
        break;
      }
    }
  }
  for (let ep of p) {
    for (let en of upper_case) {
      if (ep == en) {
        flags[2] = 1;
        break;
      }
    }
  }
  for (let ep of p) {
    for (let en of special_characters) {
      if (ep == en) {
        flags[3] = 1;
        break;
      }
    }
  }
  for (let e of flags) {
    if (e == 0) {
      minInsArr++;
    }
  }
  console.log(flags);
  if (n < 6) {
    return 6 - n > minInsArr ? 6 - n : minInsArr;
  } else {
    return minInsArr;
  }
}

//let p = "#HackerRank";
let p = "E!%Z@";
let n = 5;
console.log(psswd(n, p));

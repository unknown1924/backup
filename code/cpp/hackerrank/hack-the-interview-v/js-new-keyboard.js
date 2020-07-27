//const str = "HE*<LL>O";
const str = "h<el*llo";

const backSpace = (newstr, pos) => {
  if (pos == newstr.length) {
    return newstr.slice(0, newstr.length - 1);
  }
};

const parsrError = (str) => {
  // set curso pusiotion
  let pos = 0;
  let newstr = "";
  let numIsLocked = false;
  for (let i = 0; i < str.length; ++i) {
    switch (str[i]) {
      case "*":
        newstr = backSpace(newstr, pos);
        --pos;
        console.log(newstr);
        break;
      case "<":
        pos = 0;
        break;
      case ">":
        //pos = newstr.length;
        break;
      case "#":
        //if (numIsLocked) numIsLocked = false;
        //else numIsLocked = true;

        break;

      default:
        newstr += str[i];
    }
  }
  console.log(newstr);
};

parsrError(str);

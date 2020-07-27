function red(s) {
	let temp = s;
	for (let i = 1; i < temp.length; i++) {
		if (temp[i] == temp[i - 1]) {
			temp = temp.substring(0, i - 1) + temp.substring(i + 1);
			i = 0;
		}
	}
	console.log(temp);
}

function reduce(s) {
	let temp = s.split("");
	//	console.log(temp);
	for (let i = 0; i < temp.length; i++) {
		for (let j = i + 1; j < temp.length; j++) {
			if (
				temp[i] == temp[j] &&
				temp[i] != "" &&
				temp[j] != ""
			) {
				temp.splice(i, 1, "");
				console.log("temp i : " + temp[i]);
				temp.splice(j, 1, "");
				console.log("temp j : " + temp[j]);
			}
		}
	}
	console.log(temp.join(""));
}
//let s = "aaabccddd";

function string(){

}

let s =
	"acdqglrfkqyuqfjkxyqvnrtysfrzrmzlygfveulqfpdbhlqdqrrqdqlhbdpfqluevfgylzmrzrfsytrnvqyxkjfquyqkfrlacdqj";
//let s = "aabc";
red(s);

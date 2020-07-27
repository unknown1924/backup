const fetch = require("node-fetch");
let hell = {};
function fil(data) {
  //console.log("Filtering based on " + JSON.stringify(data));
  return data;
}
async function git() {
  let response = await fetch(`https://api.github.com/users/fabpot`);
  let data = await response.json();
  fil(data);
  //console.log(user);
}

async function covid() {
  let response = await fetch(`https://covid19.mathdro.id/api/countries`);
  let data = await response.json();
  return data;
}

let list = [];
async function main() {
  let a = await covid();
  a.countries.map((e) => {
    list.push(e.name);
  });
  //console.log(list);
}

main();

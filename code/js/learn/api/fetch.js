// url doesnot works
const fetch = require("node-fetch");
fetch("https://regres.in/api/users/1")
  .then((response) => {
    return response.json();
  })
  .then((data) => console.log(data));

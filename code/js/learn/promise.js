let p = new Promise((resolve, reject) => {
  let a = 1 + 1;
  if (a == 2) {
    resolve("Success");
  } else {
    reject("Failed");
  }
});

p.then((message) => {
  console.log("Inside then and " + message);
}).catch((message) => {
  console.log("Inside catch but " + message);
});

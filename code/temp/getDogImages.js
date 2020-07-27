const GSR = require("google-search-results-nodejs");

let client = new GSR.GoogleSearchResults("secret_api_key");

var parameter = {
  engine: "google",

  ijn: "0",

  q: "dog",

  google_domain: "google.com",

  tbm: "isch",
};

var callback = function (data) {
  console.log(data);
};

// Show result as JSON

client.json(parameter, callback);

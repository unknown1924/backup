let covidapi = "https://covid19.mathdro.id/api";
var val = document.getElementById("recovered").textContent;
var temp = 0;
fetch(covidapi)
    .then((response) => response.json())
    .then((e) => {
        //temp += e.confirmed.value;
        console.log("confirmed cases " + e.confirmed.value);
        document.getElementById("confirmed").textContent =
            "confirmed = " + e.confirmed.value;
        console.log("recovered + " + e.recovered.value);
        document.getElementById("recovered").textContent =
            "recovered = " + e.recovered.value;
        console.log("deaths " + e.deaths.value);
        document.getElementById("deaths").textContent =
            "deaths = " + e.deaths.value;
    });
//.then((data) => console.log(data));

console.log(temp);

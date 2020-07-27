import React from "react";
import ReactDOM from "react-dom";
import "./index.css";

function App() {
  const [darkMode, setDarkMode] = React.useState(true);
  return (
    <div className={darkMode ? "dark-mode" : "light-mode"}>
      <nav>
        <div className="toggle-container">
          <img
            className="moon"
            src="https://emojipedia-us.s3.dualstack.us-west-1.amazonaws.com/thumbs/60/microsoft/209/crescent-moon_1f319.png"
            height="38"
            width="38"
          />
          <span className="toggle">
            <input
              type="checkbox"
              onChange={() => setDarkMode((darkMode) => !darkMode)}
              className="checkbox"
              id="checkbox"
            />
            <label htmlFor="checkbox" />
          </span>
          <img
            className="sun"
            src="https://emojipedia-us.s3.dualstack.us-west-1.amazonaws.com/thumbs/60/microsoft/74/black-sun-with-rays_2600.png"
            height="40"
            width="40"
          />
        </div>
      </nav>
      <main>
        <h1>{darkMode ? "Dark Mode" : "Light Mode"}</h1>
        <h2>Toggle to see some magic!</h2>
      </main>
    </div>
  );
}
ReactDOM.render(<App />, document.getElementById("root"));

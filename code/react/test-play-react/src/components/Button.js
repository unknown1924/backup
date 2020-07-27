import React, { useState } from "react";

const Button = () => {
  const [state, setState] = useState(0);

  return (
    <div>
      <button onClick={() => setState(state + 1)}>+</button>
      <p> You clicked {state} times </p>
      <button onClick={() => setState(state - 1)}>-</button>
    </div>
  );
};

export default Button;

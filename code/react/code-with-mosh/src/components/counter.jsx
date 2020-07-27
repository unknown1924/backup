import React, { Component } from "react";

class Counter extends Component {
  render() {
    const { onIncrement, onDelete } = this.props;
    return (
      <div>
        <span style={{ padding: 10 }}>{this.formatCount()}</span>
        <button onClick={() => onIncrement(this.props.counter)}>
          Increment
        </button>
        <button onClick={() => onDelete(this.props.counter)}>Delete</button>
      </div>
    );
  }
  formatCount() {
    const { value } = this.props.counter;
    return value === 0 ? "zero" : value;
  }
}
// this above class component can also be written as: stateless functional component

//const FuncCounter = (props) => {
//return (
//<div>
//<span style={{ padding: 10 }}>{props.counter.value}</span>
//<button onClick={() => props.onIncrement(props.counter)}>
//Increment
//</button>
//<button onClick={() => props.onDelete(props.counter)}>Delete</button>
//</div>
//);
//};

export default Counter;

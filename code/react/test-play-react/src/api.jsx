import React from "react";

import axios from "axios";

class PersonList extends React.Component {
  state = {
    persons: [],
    country: [],
  };

  componentDidMount() {
    axios.get(`https://covid19.mathdro.id/api/countries`).then((result) => {
      const country = result.data.countries;
      this.setState({ country });
    });
  }
    const a = [];
    a = this.state.country.map(e => e);
    console.log(a);
  render() {
    return <div></div>;
  }
}

export default PersonList;

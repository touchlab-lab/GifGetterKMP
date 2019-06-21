import React from 'react';
import logo from './logo.svg';
import Carousel from 'react-bootstrap/Carousel';
import 'bootstrap/dist/css/bootstrap.css';
import './App.css';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <Carousel interval="99999">
          <Carousel.Item>
            <img src={logo} className="App-logo" alt="logo" />
            <Carousel.Caption>
              <h3>1</h3>
            </Carousel.Caption>
          </Carousel.Item>
          <Carousel.Item>
            <img src={logo} className="App-logo" alt="logo" />
            <Carousel.Caption>
              <h3>2</h3>
            </Carousel.Caption>
          </Carousel.Item>
        </Carousel>
      </header>
    </div>
  );
}

export default App;

import React from "react";
import { Link } from "react-router-dom";

function Apps() {
  return (
    <div className="home">
      <div class="container">
        <Link to="/applications/this-is-a-post-title">
          <div class="row align-items-center my-5">
            <div class="col-lg-7">
              <img
                class="img-fluid rounded mb-4 mb-lg-0"
                src="http://placehold.it/400x400"
                alt=""
              />
            </div>
            <div class="col-lg-5">
              <h1 class="font-weight-light">Application #1</h1>
              <p>
                Description: 
              </p>
              <p>
                Organization: 
              </p>
              <p>
                Platforms, Versions, and Links: 
              </p>
              <p>
                Price: 
              </p>
            </div>
          </div>
        </Link>
      </div>
    </div>
  );
}

export default Apps;
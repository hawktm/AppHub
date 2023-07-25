import React from "react";

function Register() {
  return (
    <div className="contact">
      <div class="container">
        <div class="row align-items-center my-5">
          <div class="col-lg-5">
            <h1 class="font-weight-light">Contact</h1>
            <form>
              <label>
                Enter Email Address:
                <input type="text" name="email" />
              </label>
              <br />
              <label>
                Enter Username:
                <input type="text" name="username" />
              </label>
              <br />
              <label>
                Enter Password:
                <input type="text" name="password" />
              </label>
              <br />
              <input 
                type="button" 
                value="Register" 
              />
            </form>
          </div>
        </div>
      </div>
    </div>
  );
}

export default Register;
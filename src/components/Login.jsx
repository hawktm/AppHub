import React from "react";

function Login() {
  return (
    <div className="login">
      <div class="container">
        <div class="row align-items-center my-5">
          <div class="col-lg-5">
            <h1 class="font-weight-light">Login</h1>
            <form>
              <label>
                Username:
                <input type="text" name="username" />
              </label>
              <br />
              <label>
                Password:
                <input type="text" name="password" />
              </label>
              <br />
              <input 
                type="button" 
                value="Login" 
              />
            </form>
            <p></p>
            <input 
                type="button" 
                value="No Account? Register Here" 
              />
          </div>
        </div>
      </div>
    </div>
  );
}

export default Login;
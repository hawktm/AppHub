import React from "react";
import { Outlet } from "react-router-dom";

function Application() {
  return (
    <div className="home">
      <div class="container">
        <h1 className="text-center mt-5">Applications</h1>
        <Outlet />
      </div>
    </div>
  );
}

export default Application;
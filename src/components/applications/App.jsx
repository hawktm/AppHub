import React, { useEffect } from "react";
import { useParams } from "react-router";

function App() {
  let { postSlug } = useParams();

  useEffect(() => {
    // Fetch post using the postSlug
  }, [postSlug]);

  return (
    <div className="home">
      <div class="container">
        <h1 className="mt-5">Application #1</h1>
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
  );
}

export default App;
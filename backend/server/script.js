const express = require("express");
const cors = require("cors");
const app = express();
const port = 3080;

app.use(cors());
app.use(express.text());

app.get("/", (req, res) => {
  res.send("Hello World!");
});

app.get("/meow", (req, res) => {
  res.send("mello morld!");
});

app.post("/login", (req, res) => {
  console.log("FROM CLIENT: " + req.body);
  res.send("LOGED IN");
});

app.listen(port, () => {
  console.log(`app listening on port ${port}`);
});

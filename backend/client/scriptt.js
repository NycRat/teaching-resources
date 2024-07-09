async function handleOnClick() {
  // console.log("BEFORE");
  // fetch("http://localhost:3080").then((res) => {
  //   res.text().then((text) => {
  //     console.log("TEXT: " + text);
  //   });
  // });
  // console.log("AFTER");

  console.log("BEFORE");

  const res = await fetch("http://localhost:3080");
  console.log(await res.text());

  console.log("AFTER");
}

async function cat(event) {
  event.preventDefault();
  const res = await fetch("http://localhost:3080/login", {
    method: "POST",
    body: "from cole",
  });
  console.log(await res.text());
}

// document.getElementById("a").addEventListener("click", handleOnClick)

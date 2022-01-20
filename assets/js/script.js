const btn = document.querySelector("[data-btn]")
btn.addEventListener("click", () => {
  btn.classList.toggle("animating")
})
const tl = new TimelineMax();

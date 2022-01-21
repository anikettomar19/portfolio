const btn = document.querySelector("[data-btn]")
btn.addEventListener("click", () => {
  btn.classList.toggle("animating")
})
     // Select the button
     const button = document.querySelector('.btn-toggle');

     // Listen for a click on the button
     button.addEventListener('click', function() {
       // Then toggle (add/remove) the .dark-theme class to the body
       document.body.classList.toggle('dark-theme');  
     })
     const dark = document.getElementById("dark-theme");

     dark.addEventListener("click", ()=>{
     
         if(dark.innerText === "Light Mode"){
             dark.innerText = "Dark Mode";
         }else{
             dark.innerText= "Light Mode";
         }
     });


const scriptURL = 'https://script.google.com/macros/s/AKfycbwA8KsGY4Eo1M-6F7ZFqpSoTzola3qaqW3ed2DVQwIo3w5g0WffhsqehQ97NWXU17RY/exec'

const form = document.forms['contact-form']

form.addEventListener('submit', e => {
  
  e.preventDefault()
  
  fetch(scriptURL, { method: 'POST', body: new FormData(form)})
  .then(response => alert("Thank you! Form is submitted" ))
  .then(() => { window.location.reload(); })
  .catch(error => console.error('Error!', error.message))
})


/* local host: http://localhost:8000/contact.html */

/* to kill local server, type: pkill -f "python3 -m http.server" 
into terminal */
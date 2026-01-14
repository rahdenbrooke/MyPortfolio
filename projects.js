"use strict";

/* Controls the random quotes on projects page */

// Array of Quotes
const quotes = [
  ("\"Involve me and I learn.\"\n\n\t~ Benjamin Franklin"),
  ("\"To succced in life, you need three things: \na wishbone, a backbone, and a funny bone.\"\n\n\n\t~ Reba McEntire"),
  ("\"If I cannot do great things, I can do small\nthings in a great way.\"\n\n\t~ Martin Luther King Jr."),
  ("\"The secret to getting ahead is getting started.\"\n\n\t~ Sally Berger"),
  ("\"The great aim of education is not knowledge but action.\"\n\n\t~ Herbert Spencer"),
  ("\"If you are not willing to learn, no one can help\nyou. If you are determined to learn,\n no one can stop you.\"\n\n\t ~Zig Ziglar"),
  ("\"Boldness be my friend.\"\n\n\t~ William Shakespeare"),
  ("\"Embrace the glorious mess that you are.\"\n\n\t~ Elizabeth Gilbert"),
  ("\"Be yourself. Everyone else is already taken.\"\n\n\t~ Oscar Wilde"),
  ("\"Feel the fear and do it anyways.\"\n\n\t~ Susan Jeffers")
];

// Function to get random integer between lowest and highest inclusive
function randomInt(lowest, highest) {
  return Math.floor(Math.random() * (highest - lowest + 1)) + lowest;
}

// Get the quote element by id
let quoteElem = document.getElementById("quote");

// Select a random quote index
let randomQ = randomInt(0, quotes.length - 1);

// Finds a quote for innerHTML quotes[number] from the array quotes
quoteElem.innerHTML = quotes[randomQ];
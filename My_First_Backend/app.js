// require the express module
const express = require("express");
// create an object from the express function which we contains methods for making requests and starting the server
const app = express();

// const basicAuth = require('express-basic-auth');
// const songs = ['New York, New York', 'My way', 'Lagbaja'];
// for (let i = 0; i < songs.length; i++) {
//   const element = songs[i];
//   console.log(element);
// }

let frankSinatraSongs = [
  'New York, New York',
  'My way',
  'My Shining Hour',
  'My Melancholy Baby',
  'Moonlight in Vermont',
  'Blue Moon',
  'All My Tomorrows',
  'Angel Eyes',
  'Around the World',
  'Autumn in New York',
  'Together',
  'Time After Time',
  'To Love a Child',
  'This Love of Mine',
  'That Old Feeling',
  'Thanks for the Memory',
  'Tenderly',
  'Teach Me Tonight',
  'Take the A Train',
  'Swinging on a Star'

];


function getRandomSong() {
  let randIndex = Math.floor(Math.random() * frankSinatraSongs.length); 
  let randElement = frankSinatraSongs[randIndex];
  // console.log(randElement);
  return randElement;
}

// create a route for a GET request to '/' - when that route is reached, run a function
app.get("/", function(request, res) {
  res.send(getRandomSong());
});

app.get("/birth_date", function(request, res) {
  return res.send("12 December, 1915\n");
});

app.get("/birth_city", function(request, res) {
  return res.send("Hoboken, New Jersey\n");
});

app.get('/wives', function(request, res) {
  return res.send('Nancy Barbato, Ava Gardner, Mia Farrow, Barbara Marx\n');
});

app.get("/picture", function(request, res) {
  return res.redirect("https://upload.wikimedia.org/wikipedia/commons/thumb/e/e3/Frank_Sinatra_%281957_studio_portrait_close-up%29.jpg/220px-Frank_Sinatra_%281957_studio_portrait_close-up%29.jpg");
});

app.get('/public', function(request, res) {
  return res.send('Everybody can see this page, because it is public\n');
});


// ===========protected route============
app.use('/protected', (req, res, next) => {

  // -----------------------------------------------------------------------
  // authentication middleware

  const auth = {login: 'admin', password: 'admin'} // change this

  // parse login and password from headers
  const b64auth = (req.headers.authorization || '').split(' ')[1] || ''
  const [login, password] = Buffer.from(b64auth, 'base64').toString().split(':')

  // Verify login and password are set and correct
  if (login && password && login === auth.login && password === auth.password) {
    // Access granted...
    return res.status(200).send('Welcome, authenticated client\n');
  }
  else{
    // Access denied...
    res.set('WWW-Authenticate', 'Basic realm="Restricted Area"') // change this
    res.status(401).send('Not authorized\n') // custom message

  }
 //Stackoverflow source: https://stackoverflow.com/questions/23616371/basic-http-authentication-with-node-and-express-4

});


// when a request comes in to /instructors/ANYTHING
// app.get("/instructor/:firstName", function(req, res) {
//   // let's capture the "dynamic" part of the URL, which we have called "firstName". The name that we give to this dynamic part of the URL will become a key in the params object, which exists on the request object.

//   // let's send back some text with whatever data came in the URL!
//   return res.send(
//     `The name of this instructor is ${request.params.firstName}`
//   );
// });

// let's tell our server to listen on port 3000 and when the server starts, run a callback function that console.log's a message
app.listen(8080, function() {
  console.log(
    // "The server has started on port 3000. Head to localhost:3000 in the browser and see what's there!"
    "The server has started on port 8080. Head to 0.0.0.0:8080 in the browser and see what's there!"
  );
});
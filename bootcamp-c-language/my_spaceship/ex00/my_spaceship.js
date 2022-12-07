function turn_right(spaceship){
  if(spaceship["direction"] == "up"){
      spaceship["direction"] = "right";
  } else if (spaceship["direction"] = "left"){
      spaceship["direction"] = "up";
  } else if (spaceship["direction"] = "down"){
      spaceship["direction"] = "left";
  } else if (spaceship["direction"] = "right"){
      spaceship["direction"] = "down";
  }
}

function turn_left(spaceship){
  if(spaceship["direction"] == "up"){
      spaceship["direction"] = "left";
  } else if (spaceship["direction"] = "left"){
      spaceship["direction"] = "down";
  } else if (spaceship["direction"] = "down"){
      spaceship["direction"] = "right";
  } else if (spaceship["direction"] = "right"){
      spaceship["direction"] = "up";
  }
}

function move(spaceship){
  if(spaceship["direction"] == "up"){
      spaceship["y"] -= 1;
  } else if (spaceship["direction"] = "left"){
      spaceship["x"] -= 1;
  } else if (spaceship["direction"] = "down"){
      spaceship["y"] += 1;
  } else if (spaceship["direction"] = "right"){
      spaceship["x"] += 1;
  }
}

function my_spaceship(params){
  let index = 0;
  let spaceship = {x: 0, y: 0, direction: "up"}
  while(index < params.length){
      let letter = params[index];
      if (letter == "A") {
          move(spaceship);
      }
      else if (letter == "R"){
          turn_right(spaceship);
      }
      else if (letter == "L"){
          turn_left(spaceship);
      }
      index += 1;
  }
  return spaceship;
}

console.log(my_spaceship("RAALALL"))
console.log(my_spaceship("AAAA"))
console.log(my_spaceship(""))
console.log(my_spaceship("RAARA"))
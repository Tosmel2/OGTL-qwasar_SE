function my_downcase(text) {
  console.log(text.toLowerCase());
};
my_downcase("Hello World");


function my_upcase(text) {
  console.log(text.toUpperCase());
};
my_upcase("hello");


function my_each(myArray) {
  myArray.forEach(myElement =>{
      console.log(myElement);
  });
};
my_each(["blah1", "blah2", "blah3"]);


function my_size(myString) {
  console.log(myString.length);
};
my_size("hello");

function my_string_index(myString, myLetter) {
  for (let i = 0; i < myString.length; i++) {
      console.log(myString.indexOf(myLetter));
  };
  
};
my_string_index("hello", "l");
my_string_index("aaaaa", "b");
my_string_index("hey", "y");
my_string_index("hey", "e");

// string.indexOf(searchvalue, start)
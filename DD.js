function my_downcase(text) {
  console.log(text.toLowerCase());
};
my_downcase("Hello World");

//=====================================
function my_upcase(text) {
  console.log(text.toUpperCase());
};
my_upcase("hello");

//=====================================

function my_each(myArray) {
  myArray.forEach(myElement =>{
      console.log(myElement);
  });
};
my_each(["blah1", "blah2", "blah3"]);

//=====================================
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
//=====================================
function my_map_mult_two(arr){
  return arr.map(function(val){
      return val *2;
  });
}

my_map_mult_two([1, 2, 3, 4, 5]);
//ex00: A function my_map_mult_two which receives an integer array as parameter and iterate over the array, perform a multiplication by 2 on each value and return the new array collected.

//=====================================

function my_count_on_it([...args]) {
return args.map(val => val.length);
}

console.log(my_count_on_it(["This", "is", "the", "way"]));
//a function my_count_on_it, which receives a string array as parameter and returns an array with the length of each strings.

//=====================================
function my_count_on_it(...args) {
return args.map(function(val){
  return val.length
  });
}

console.log(my_count_on_it(
'str1',
'je suis un chocolat',
));

//=====================================
function my_array_uniq(param_1) {

};

let arr = [1,2,3,4,4,3,2];
let valuesInArray = arr.filter(function(value, index, self){
return self.indexOf(value) === index;
});

console.log(valuesInArray);

//a function my_array_uniq, which receives an integer array as a parameter and returns an array with those integers but without any duplicates.

//=====================================
function my_average_mark(marks) {
  let sum = 0;
  for (let i = 0; i < marks.length; i++) {
  sum += marks[i].integer;
  };
  averageMark = sum / marks.length;
  console.log(averageMark);
};

my_average_mark([
{"string": "John", "integer": 7},
{"string": "Margot", "integer": 8},
{"string": "Jules", "integer": 4},
{"string": "Marco", "integer": 19}
]);

tasks.map((a)=>a.integer).reduce((a,b)=>a+b);

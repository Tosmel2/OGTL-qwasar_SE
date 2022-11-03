
function my_array_uniq(arr){
  return arr.filter(function(value, index, self){
      return self.indexOf(value) === index;
  });
  // return valuesInArray;
};
// console.log(my_array_uniq([1,2,3,4,4,3,2]));
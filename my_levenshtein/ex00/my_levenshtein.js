function my_levenshtein(str1, str2){
  let count = 0;
  if (str1.length != str2.length) {
      return -1;
  }
  for (let i = 0; i < str1.length; i++) {
      if (str1[i] != str2[i]) {
          count++;
      }
      
  }
      return count;
}
// console.log(my_levenshtein("ACCAGGG", "ACTATGG"));
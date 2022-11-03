function my_average_mark(marks) {
  let sum = 0;
  for (let i = 0; i < marks.length; i++) {
  sum += marks[i].integer;
  };
  averageMark = sum / marks.length;
  return (Math.round(averageMark * 10) / 10).toFixed(1);
};

// console.log (my_average_mark([{"string": "Quentin", "integer": 1}, {"string": "Fred", "integer": 1}, {"string": "Julia", "integer": 18}, {"string": "stephanie", "integer": 13}]));

# Welcome to Quest01
***

## Task
The basic C syntax (variable, if, while-loop, functions and ASCII)

## Description
<strong> This quest will lead you to the basic C syntax (variable, if, while-loop, functions and ASCII)
You will use your first System Call: write(). </strong>

- <strong>ex00</stong>: What is compilation?
It transforms a text file (yes a file of code is a text file) into a binary file.

<code>gcc -o my_first_compilation my_first_compilation.c</code>

-o stands for output, it will be the name of the binary we want to create.
xxxx.c -> C file we want to compile
Let's dive in.

<strong>Step00</strong>
We will use this C file (you can copy paste it). You need to name it: my_first_compilation.c

<code>
#include <stdio.h>

int main(int ac, char **av) {
    printf("my_first_compilation.\n");
    return 0;
}
</code>

<strong>Step01</strong>
Run the compilation command:

<code> gcc -o my_first_compilation my_first_compilation.c </code>

<strong>Step02</strong>
Execution
<code>
./my_first_compilation
It should print my_first_compilation. :)

(The \n means it will go to a new line.)
</code>

<strong>Example 00</strong>

Input: 
Output: my_first_compilation.

Return Value: nil

How to compile?
- <strong>ex01:</strong>Create a variable with (if needed) the right type in C. 
- <strong>ex02:</strong>Create a variable character(char) with (if needed) the right type in C. 
- <strong>ex03:</strong>Create a variable string in C
- <strong>ex04:</strong>Create multiple variables with multiple type in C
- <strong>ex05:</strong>Create Incrementation and decrementation depending of the language it's either ++ (--) or += 1 (-= 1).
- <strong>ex06:</strong>Create If/else statements in C
- <strong>ex07:</strong>Create multiple If/else statements in C
- <strong>ex08:</strong>Create function in C
- <strong>ex09:</strong>Implemente a while loop to print 100 times "I want to code"
- <strong>ex10:</strong>Create function that accept parameters and Implemente a while loop to call a function detonation in...X secondes.
Your loop will stop a 0. 10 included, 0 is not
- <strong>ex11:</strong>First Return Function 
- <strong>ex12:</strong>Create a my_is_negative function.
This function my_is_negative returns 1 or 0 depending on the integer's sign entered as a parameter.
If n is negative, return 0. If n is positive or 0, return 1.
- <strong>ex13:</strong>Create a my_abs function in C 
- <strong>ex14:</strong>Create a my_isalpha function.Reproduce the behavior of isalpha() function. It returns 1 if the character sent as argument is a letter (A to Z or a to z). It returns 0 otherwise.
- <strong>ex15:</strong>Create a my_isdigit function. Reproduce the behavior of isdigit() function. It returns 1 if the character sent as argument is a digit (0 to 9). It returns 0 otherwise. 
- <strong>ex16:</strong>Create a my_islower function. Reproduce the behavior of islower() function. It returns 1 if the character sent as argument is a lower letter (a to z). It returns 0 otherwise. 
- <strong>ex17:</strong>Create a my_isupper function. Reproduce the behavior of isupper() function. It returns 1 if the character sent as argument is a upper-case letter (A to Z). It returns 0 otherwise 
- <strong>ex18:</strong>Create a my_isspace function. Reproduce the behavior of isspace() function. It returns 1 if the character sent as argument is a space (man isspace). It returns 0 otherwise. 
- <strong>ex19:</strong>Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter a.
It will be follow by a \n (newline character)
- <strong>ex20:</strong>Create a function that displays the alphabet in lowercase, on a single line, by descending order, starting from the letter z.
It will be follow by a \n (newline character)


### The Core Team

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
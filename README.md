# Repository for _printf function

_printf is our version of the printf function from the stdio.h library, a project developed for Holberton School for educational purposes._


## Description:

The function writes output to stdout and returns the number of characters that are printed or if there is an error, it returns a negative value (-1).


### Conversion specificiers

In this function, the conversion specifier character determines if the respective argument should be interpreted as a character, a string, or an integer.


### Examples:

These are some examples of using format specifiers in the function _printf:_
.c In the function _printf_, the arguments that follow the format string are interpreted according to the corresponding type character. So:

#### %c: specifies a single-byte character
char chr = ‘N’; 
_printf(“%c\n”, chr);
Output: N

#### %s: specifies a string of characters
_printf("Hello %s", "World!");
Output: Hello World!


### Task 0.

Write a function that produces output according to a format.
. c
. s
. %

In this task _printf prints on screen:
1. A character
2. A character string
3. The character '%' and if the following character is different from null or 
   space also print.

### Task 1.

function that produces output according to a format.
. d
. i

In this task _printf prints on screen:

1. Decimal numbers
2. Integer numbers

**In the file man_3_printf you will find the instructions for using _printf

**Developed by Kimberly Hinostroza and Nasser Abuchaibe for Holberton School


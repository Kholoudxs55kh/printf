This project is about printf implementation.

The Requirements of this task is:
- not to use any main function in the root of the directory, all the files should be compiled with no errors, ant file that contains a main func() shoul be in a sub-directory.
- the test case file they gave to us should run well with the same result.
- me and my partner should work together by 40:60 at mostly
- till now we managed to finish about 6 tasks in three files, the main file (_printf.c), the (task1.c) and (print_str.c).
pray for us
~ in task 0: we have to Write a function that produces output according to a format.
~ in task 1: Handle the following conversion specifiers: d, i
~ in task 2: Handle the following custom conversion specifiers: b
~ in task 3: Handle the following conversion specifiers: u, o, x, X
~ in task 4: Use a local buffer of 1024 chars in order to call write as little as possible.
~ in task 5: Handle the following custom conversion specifier: S
~ in task 6: Handle the following conversion specifier: p.
~ 7, 8, 9, 10, 11, 12 not done yet
~ in task 13: Handle the following custom conversion specifier: r: prints the reversed string
~ in task 14: Handle the following custom conversion specifier: R: prints the rot13'ed string
~ in task 15: we should make sure all of them work together when done with the whole task

##The MAIN Work

- we are asked to implement a _printf function that works the same as Printf() func
so we had to make sure that the specifiers do the same, and to generate some of our own specifiers
* %c -> would be the specifier to print a single character
* %s -> would be the specifier to print a string( array of characters)
* %d -> would be the specifier to print a decimil number
* %i -> would be the specifier to print an integer number (the same as %d mainly)
* %b -> would be the specifier to print an unsigned int converted to binary
* %u -> would be the specifier to print an unsigned int
* %o -> would be the specifier to print an integer converted to octal type
* %x -> would be the specifier to print an integer converted to hex type in lower cases
* %X -> would be the specifier to print an integer converted to hex t
    ype in capital cases
* %S "generated" -> would be the specifier to print Non printable characters this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
* %p -> would be the specifier to print the pointer value (address) of the arguements
* %r "generated" -> would be the specifier to print the string reversed
* %R "generated" -> would be the specifier to print the string converted to rot'13 code

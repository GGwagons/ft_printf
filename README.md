# ft_printf - Reimplementing printf in C

Welcome to my **ft_printf** project repository! This project is part of my journey in learning C programming and involves reimplementing the `printf()` function from the C standard library. This will allow me to work with variable arguments and improve my understanding of function flexibility in C.

## Introduction

The `ft_printf()` project is all about understanding and re-implementing the `printf()` function. The project teaches you how to work with **variadic functions** in C, which handle a variable number of arguments, providing a flexible function signature. Once the project is successfully completed, this function can be added to my `libft`, making it available for use in future C projects.

## Mandatory Part

The mandatory part of the project involves recreating the `printf()` function. The prototype of the function is as follows:

```c
int ft_printf(const char *, ...);
```

The function must handle the following conversions:

    %c: Prints a single character.
    %s: Prints a string.
    %p: Prints a pointer in hexadecimal format.
    %d: Prints a decimal (base 10) number.
    %i: Prints an integer (base 10).
    %u: Prints an unsigned decimal number.
    %x: Prints a number in lowercase hexadecimal (base 16).
    %X: Prints a number in uppercase hexadecimal (base 16).
    %%: Prints a percent sign.

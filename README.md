## This a team project on PRINTF Project in ALX Software Engineering


# _printf Project
## Description
This is a custom implementation of the C library printf function, called _printf, developed by Marvis Aigbe and Sophia Ezeh. Our implementation provides support for a subset of standard printf features, as well as some custom conversion specifiers.

### Features
Our _printf implementation supports the following standard conversion specifiers:
- c: character
- s: string
- %: literal '%'
- d, i: signed decimal integer
- u: unsigned decimal integero: unsigned octal integer
- x: unsigned hexadecimal integer (lowercase)
- X: unsigned hexadecimal integer (uppercase)
- p: pointer address

It also supports the following custom conversion specifiers:
- b: unsigned integer in binary format
- S: string with non-printable characters displayed as "\x" followed by their hexadecimal ASCII code (uppercase, always 2 characters)
- r: reversed string
- R: rot13-encoded string
Additionally, our implementation handles the following flag characters for non-custom conversion specifiers:
- +: always show the sign for signed numerical values
- space: insert a space before signed numerical values if no sign is displayed
- #: alternate form for certain conversions (e.g., "0x" prefix for x and X, "0" prefix for o)

Our _printf implementation also supports the following length modifiers for non-custom conversion specifiers:
- l: long int for d, i, u, o, x, and X
- h: short int for d, i, u, o, x, and X
Field width, precision, and flag characters '0' (zero-padding) and '-' (left-justify) are also supported for non-custom conversion specifiers.

### Usage
To use this _printf implementation, include the header file in your C source code and link the library during the compilation process. Then, call the _printf function as you would with the standard C library printf.

### Limitations
This _printf implementation does not reproduce the full buffer handling capabilities of the C library printf function, and some options might not work exactly as they do in the standard version.


## Contributors are: [Marvis Aigbe], [Sophia Ezeh](https://github.com/Solexi)

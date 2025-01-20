# ft_printf

The primary objective of the ft_printf project is to implement a custom version of the C standard library function printf. 


![擷取](https://github.com/user-attachments/assets/16ab3232-37c9-4870-8bcb-e2158999ac65)

You have to implement the following conversions:

• %c Prints a single character.

• %s Prints a string (as defined by the common C convention).

• %p The void * pointer argument has to be printed in hexadecimal format.

• %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign.

va_list: A type used to store variable arguments, allowing traversal of variadic arguments.

va_start: Initializes the va_list and prepares it to access the variadic arguments.

va_arg: Retrieves the next argument from the va_list.

va_end: Cleans up the va_list; it must be called after processing the variadic arguments.


#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * Return: number of arguments 
 */
int _printf(const char *format, ...)
{
char *traverse;
unsigned int i;
char *s;
va_list arg;
va_start(arg, format);
for (traverse = format; *traverse != '\0'; traverse++)
{
while (*traverse != '%')
{
_putchar(*traverse);
traverse++;
}
traverse++;
switch (*traverse)
{
case 'c': i = va_arg(arg, int);
_putchar(i);
break;
case 's': s = va_arg(arg, char *);
_putchar(s);
break;
}
}
va_end(arg);
}
       

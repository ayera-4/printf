#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: input parameter
 * Return: number of arguments 
 */
int _printf(const char *format, ...)
{
int count = -1;
if (format != NULL)
{
int i;
va_list arg;
int (*o)(va_list);
va_start(arg, format);
if (format[0] == '%' && format[1] == '\0')
{
return (-1);
}
count = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i + 1] == '%')
{
if (format[i + 1] == '%')
{
count += _putchar(format[i]);
i++;
}
else if (format[i + 1] != '\0')
{
o = fetchfunc(format[i + 1]);
count += (o ? o(arg) : _putchar(format[i]) + _putchar(format[i + 1]));
i++;
}
}
else
count += _putchar(format[i]);
}
va_end(arg);
}
return (count);
}

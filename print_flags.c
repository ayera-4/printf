#include "main.h"

/**
 * print_flags - turns on flags found by printf
 * @s: character that holds the flag specifier
 * @f: pointer to struct flags where we turn on the flags
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int print_flags(char s, mods *f)
{
_Bool modifier = true;
switch (s)
{
case '+':
f->plus = true;
break;
case ' ':
f->space = true;
break;
case '#':
f->hash = true;
break;
case '-':
f->dash = true;
break;
case '0':
f->zero = true;
break;
default:
modifier = false;
}
return (modifier);
}
	

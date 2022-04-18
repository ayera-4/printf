#include "main.h"
/**
 * fetchfunc - return functions
 * @s: array to check
 * Return: return a function
 */
int (*fetchfunc(char s))(va_list)
{
options functions[] = {
{"c", _c},
{"s", _s},
{"d", _d},
{"i", _i},
{"b", _b},
{NULL, NULL}
};
int i;
for (i = 0; functions[i].c != NULL; i++)
{
if (*functions[i].c == s)
return (functions[i].f);
}
return (NULL);
}
		

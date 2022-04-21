#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdbool.h>
#include <stdarg.h>
/**
 * struct modifiers - struct containing flags to "turn on"
 * when a flag specifiier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 * @dash: flag for the '-' character
 * @zero: flag for the '0' character
 */
typedef struct modifiers
{
_Bool plus;
_Bool space;
_Bool hash;
_Bool dash;
_Bool zero;
} mods;

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
  int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i, mods *f);
int print_d(va_list d, mods *f);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o, mods *f);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

/* get_flags */
int print_flags(char s, mods *f);

#endif  /* _HOLBERTON_H */

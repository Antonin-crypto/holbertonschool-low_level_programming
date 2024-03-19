#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * struct form - Struct form
 *
 * @format_print: The format of string
 * @func: The function associated
 */
typedef struct form
{
	char *format_print;
	void (*func)();
} form_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

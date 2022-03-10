#include "variadic_functions.h"

/**
 * print_char - fonction
 * @args: para
 * Return: rien
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - fonction
 *@args: para
 * Return: rien
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - fonction
 *@args: para
 * Return: rien
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_str - fonction
 * @args: para
 * Return: rien
 */
void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char*);

	if (s == NULL)
		s = ("(nil)");
	printf("%s", s);
}
/**
 * print_all - fonction
 * @format: para
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";

	print func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		while (func[j].c != NULL && format[i] != *(func[j].c))
			j++;

		if (func[j].c != NULL)
		{
			printf("%s", separator);
			func[j].f(args);
			separator = ", ";
		}

		i++;
		j = 0;
	}

	printf("\n");
	va_end(args);
}

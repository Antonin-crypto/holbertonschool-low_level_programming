#include <unistd.h>
#include <stdio.h>
/**
 * main- program should return 0
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	putchar('\n');
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}

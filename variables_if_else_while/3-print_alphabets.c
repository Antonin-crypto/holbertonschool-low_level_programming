#include <stdio.h>
/**
 * main-Prints the alphabet in lowercase .
 *
 * Return : Always 0 (succes)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}

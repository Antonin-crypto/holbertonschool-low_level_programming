#include "main.h"
/**
 * void jack_bauer- prints every minute of the day
 *@n: the numbre to be treated
 *Return:Always 0.
 */
int jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
		}
	}
	return (0);
}

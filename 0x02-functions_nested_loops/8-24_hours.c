#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Nothing.
 */

void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}

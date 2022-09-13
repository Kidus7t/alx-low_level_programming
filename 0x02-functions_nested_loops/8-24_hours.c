#include "main.h"
/**
 * jack_bauer - printing every minute
 * Return: 0
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int hour_remainder;
int min_remainder;
while (hours <= 23)
{
while (minutes <= 59)
{
min_remainder = minutes % 10;
hour_remainder = hours % 10;
_putchar(hours / 10 + '0');
_putchar(hour_remainder + '0');
_putchar(':');
_putchar(minutes / 10 + '0');
_putchar(min_remainder + '0');
minutes++;
_putchar('\n');
}
hours++;
minutes = 0;
}
}

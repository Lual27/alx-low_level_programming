#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days
 * left in the year, taking into account the leap year
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */

void print_print_remaining_days(int month, int day, int year)

{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %\n", 365 - day);
		}
	}
}

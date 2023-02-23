#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_remaining = 0, i;

	for (i = month; i <= 12; i++)
	{
		if (i == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			days_remaining += 29 - day;
		}
		else
		{
			days_remaining += days_in_month[i - 1] - day;
		}
		day = 0;
	}

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("Day of the year: %d\n", 366 - days_remaining - 1);
		printf("Remaining days: %d\n", days_remaining + 1);
	}
	else
	{
		printf("Day of the year: %d\n", 365 - days_remaining);
		printf("Remaining days: %d\n", days_remaining);
	}
}

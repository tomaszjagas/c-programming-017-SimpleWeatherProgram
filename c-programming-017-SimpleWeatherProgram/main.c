/********************************************************
* Description: Simple weather program with array elements
*********************************************************/

#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main() {
	// initialize rainfall data for 2011-2015
	float rain[YEARS][MONTHS] =
	{
		{4.3,4.3,3.4,3.4,2.3,5.6,4.5,3.3,4.6,3.5,7.6,9.8},
		{4.3,4.3,3.4,3.4,2.3,5.6,4.5,4.3,4.6,3.5,7.6,9.8},
		{4.3,5.3,3.4,3.4,2.3,7.6,4.5,3.3,3.6,3.5,7.6,9.8},
		{4.3,4.3,4.4,3.4,4.3,5.6,4.5,3.3,4.6,3.5,3.6,9.8},
		{4.3,4.3,3.4,2.4,2.3,5.6,4.5,3.3,4.6,3.5,7.6,4.8}
	};
	int year, month;
	float subtotal, total;

	printf("YEAR\t\tRAINFALL   (inches)\n");

	for (year = 0, total = 0; year < YEARS; year++) {
		for (month = 0, subtotal = 0; month < MONTHS; month++) {
			subtotal += rain[year][month];
		}
		printf("%5d \t\t\t%15.1f\n", 2010 + year, subtotal);
		total += subtotal;
	}

	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);

	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (month = 0; month < MONTHS; month++) {
		for (year = 0, subtotal = 0; year < YEARS; year++) {
			subtotal += rain[year][month];
		}
		printf("%4.1f ", subtotal / YEARS);
	}
	printf("\n");

	return 0;
}
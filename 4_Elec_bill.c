#include <stdio.h>

void main()
{
	float units, base_cost, fuel_charge, gov_tax, total  = 0;

	printf("Enter units of electricity used: ");
	scanf_s("%f", &units);

	if (units <= 100)                       //Conditons for the base multiplier//
	{
		base_cost = units * 4;
	}
	else if (units > 100 || units <= 300)
	{
		base_cost = units * 4.5;
	}
	else if (units > 300 || units <= 500)
	{
		base_cost = units * 4.75;
	}
	else 
	{
		base_cost = units * 5;
	}

	fuel_charge = 0.2 * base_cost;             //Calculating percent of fuel charege and government tax//
	gov_tax = 0.1 * base_cost;
	total = fuel_charge + gov_tax + base_cost;

	printf("Your bill for this month is: Rs.%.2f\n", total);
}
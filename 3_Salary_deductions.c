#include <stdio.h>

void main()
{
	int b_salary, h_allowance, r_allowance, g_salary = 0;  //Defining variables//
	printf("                       Salary Details\n");     //Header//
	printf("          Basic Salary:                ");
	scanf_s("%d", &b_salary);                              //Basic salary entered//
	h_allowance = 0.4 * b_salary;                          //Health allowance calculation//
	printf("          Health Allowance:            %d\n", h_allowance);
	r_allowance = 0.2 * b_salary;                          //House Rent allowance calculation//
	printf("          House Rent Allowance:        %d", r_allowance);
	g_salary = b_salary + h_allowance + r_allowance;       //Gross allowance calculation//
	printf("\n_________________________________________________");
	printf("         \n\n          Gross Salary:                %d\n", g_salary);
	
}
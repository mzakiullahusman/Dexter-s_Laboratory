#include <stdio.h>

void main()
{
	float weight, height_f, height_i, height_m, bmi = 0;

	printf("Enter your weight in kilograms: ");
	scanf_s("%f", &weight);
	printf("\nEnter the foot part of your height: ");      //Taking seperate inputs of height in different units//
	scanf_s("%f", &height_f);
	printf("\nEnter the inch part of your height: ");
	scanf_s("%f", &height_i);

	height_m = (height_f * 0.3048) + (height_i * 0.0254);  //Using the fact that 1in = 0.0254m and 1ft = 0.3048//

	                                                       //printf("Height in meters is: %f", height_m);//
	bmi = weight / (height_m * height_m);

	if (bmi > 25) 
	{
	  bmi--;                                             //Post incrementing by 1//
	}

	printf("\nYour BMI is: %.3f\n", bmi);                //BMI is shown in 3 decimal places//

}


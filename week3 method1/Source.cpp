#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	float x;
	float y;
	float z;
	printf("Enter your weight (in Kg): ");
	scanf("%f", &x);


	printf("Enter your hight (in m.) : ");
	scanf("%f", &y);
	z = x / (y * y);
	printf("Your BMI is %f\n", z);

	if (z < 18.5) {
		printf("Underweight");
	}
	else if (z >= 18.5 && z <= 24.9) {
		printf("Normal");
	}
	else if (z > 24.9 && z <= 29.9) {
		printf("Overweight");
	}
	else {
		printf("Obese");
	}



	return 0;



}
#include<stdio.h>
#include<conio.h>

void main()

{
	float Fahrenheit,Celsius;
	printf("Enter the temperature in Celsius :");
	scanf("%f",&Celsius);
	
	Fahrenheit=(Celsius*9)/5+32;
	printf("Fahrenheit =%.2f",Fahrenheit);
	
}

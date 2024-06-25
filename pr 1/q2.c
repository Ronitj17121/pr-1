#include<stdio.h>
#include<conio.h>

main()


{
	int BaseSalary,GrossSalary,HRA,DA,TA;
	HRA=10;
	DA=5;
	TA=8;
	
	printf("Enter your base salary :");
	scanf("%d",&BaseSalary);
	
	GrossSalary = BaseSalary+(BaseSalary*HRA)/100+(BaseSalary*DA)/100+(BaseSalary*TA)/100;
	printf("Your gross salary : %d",GrossSalary);
	
	
}

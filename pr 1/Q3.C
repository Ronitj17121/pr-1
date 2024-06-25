#include<stdio.h>
#include<conio.h>

 main()

{
	int angleA,angleB,angleC;
	printf("Enter angle1 :");
	scanf("%d",&angleA);
	
	printf("Enter angle2 :");
	scanf("%d",&angleB);
	
	angleC=180-(angleA+angleB);
	printf("angleC = %d",angleC);
}

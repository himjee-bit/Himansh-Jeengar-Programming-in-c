/*Experiment 3.2: Loops 
1. WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
	printf("\n---------------------------------------------------------------------------------\n");
	int a0=0, ap=0, an=0; char op='y';
	while (op=='y' || op=='Y')
	{
		int i;
		printf("Enter the number:"); scanf("%d", &i);
		(i==0) ? a0++ : (i>0) ? ap++ : (i<0) ? an++ : printf("Invalid input");
		printf("Do you want to continue? Enter y for yes, n for no"); scanf(" %c", &op);		
	}
	printf("Number of Positive numbers entered are %d \nNumber of Zeros entered are %d \nNumber of negitive numbers entered are %d \n", ap, a0, an);
	return 0;
}

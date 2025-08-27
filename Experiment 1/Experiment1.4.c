/* Experiment 1: Installation, Environment Setup and starting with c language
    4. Write a C program to perform any 4 arithmetic operations on two numbers by user*/
#include <stdio.h>

int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
	printf("\n---------------------------------------------------------------------------------\n");
	int a,b,sum,prod,sub; float div; //declaration
	printf("Enter the number a and b");
	scanf("%d%d",&a, &b);
	sum = a + b ;
	prod = a*b;
	sub =a-b;
	div = (float) a/b;
	printf("The sum of a and b is %d \nThe difference betweet a and b is %d \nThe product of a and b is %d \nThe answer for a/b is %.5f", sum, sub, prod, div);
	return 0;
}

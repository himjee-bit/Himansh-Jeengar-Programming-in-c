/*Experiment 3.2: Loops
2. WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting.   Num * 1 = Num */
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
	printf("\n---------------------------------------------------------------------------------\n");
	int m;
	printf("Enter the number whose multiplication table you want:"); scanf("%d", &m);
	int i=1;
	for(i==1; i<=10; i++)
	{
		int n= m*i;
		printf("%d x %d = %d\n", m, i,n);
	}
	return 0;
}

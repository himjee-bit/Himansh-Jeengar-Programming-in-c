/*Experiment 3.2: Loops 
4. The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade. */
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
	printf("\n---------------------------------------------------------------------------------\n");
	int i, j=100000;
	for(i=1; i<11; i++)
	{
		j=j+(j*0.1);
		printf("Population of the town in year %d is: %d\n", i, j);
		
	}
	return 0;
}

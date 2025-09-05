/* Experiment 3.1: Conditional Statements 
4. According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1");
	printf("\n---------------------------------------------------------------------------------\n");
	int yr, a, k, h;
	printf("Enter the year:");
	scanf("%d", &yr);
	k=yr%100;
	h=yr%400;
	if(k!=0 && h==0)
	{
	    printf("The year entered is a leap year!");
	}
	printf("\nThe day on 1st January of year %d is:", yr);
	a=(yr+((yr-1)/4)-((yr-1)/100)+((yr-1)/400))%7;
	switch (a)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Satday");
			break;
		default:
			printf("Sunday");
		
	}
	return 0;
}

/*Experiment 3.2: Loops
3. WAP to generate the following set of output. 
a.  
  1 
 2 3 
4 5 6*/
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
	printf("\n---------------------------------------------------------------------------------\n");
	int n, i, j=1, r;
	for(n=1; n<=3; n++) 
	{
		r=4-n;
		printf("%*s", r, " ");
		for(i=1; i<=n; i++)
		{
			printf("%d ", j);
			j++;
		}
		printf("\n");
	}
	return 0;
}

/*Experiment 3.2: Loops   
3. WAP to generate the following set of output. 
b.   
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 */
#include<stdio.h>
int main()
{
	printf("Himansh Jeengar\nSAP ID: 590025460\nCourse- BSc CS\nBatch-1"); 
	printf("\n---------------------------------------------------------------------------------\n");
	int i, j, r, t, k;
	printf("Enter the number of rows you want:"); scanf("%d", &k);
	for(j=45;j>0;j--)
	{
	    printf(" ");
	}
	printf("1\n");
	for(i=1; i<=k; i++)
	{
		for(j=40-3*i; j>0; --j)
		{
			printf(" ");
		}
		t=1;
		printf("%6d", t);
		for(r=0;r<i;r++)
		{
			t=t*(i-r)/(r+1);
			printf("%6d",t);
		}
		printf("\n");
	}
	return 0;
}

/*Experiment 3.1: Conditional Statements 
5. WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three. */
#include<stdio.h>
int main()
{
	int l1, l2, l3, b1, b2, b3, p1, p2, p3;
	printf("Enter the length and weidth of rectangle 1:"); scanf("%d%d", &l1, &b1);
	printf("Enter the length and weidth of rectangle 2:"); scanf("%d%d", &l2, &b2);
	printf("Enter the length and weidth of rectangle 3:"); scanf("%d%d", &l3, &b3);
	p1=2*(l1+b1); p2=2*(l2+b2);	p3=2*(l3+b3);
	printf("The perimeter of\nRectangle 1 is %d\nRectangle 2 is %d\nRectangle 3 in %d\n", p1, p2, p3);
	(p1>p2 && p1>p3) ? (printf("Perimeter of Rectangle1 is max!")) : ((p2>p1 && p2>p3) ? (printf("Perimeter of Rectangle 2 is max!")) : ((p3>p2 && p3>p1) ? (printf("Perimeter of Rectangle 3 is max!")) : printf("the perimeter of all rectangles are equal")));
	return 0;
}

#include <stdio.h>
void main()
{
	int a,b;

	printf("Input the values for X and Y coordinate(use space): ");
	scanf("%d %d",&a,&b);

	if( a > 0 && b > 0)
	  printf("The coordinate point (%d,%d) lies in the First quandrant.\n",a,b);
	else if( a < 0 && b > 0)
	  printf("The coordinate point (%d,%d) lies in the Second quandrant.\n",a,b);
	else if( a < 0 && b < 0)
	  printf("The coordinate point (%d, %d) lies in the Third quandrant.\n",a,b);
	else if( a > 0 && b < 0)
	  printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n",a,b);
	else if( a == 0 && b == 0)
	  printf("The coordinate point (%d,%d) lies at the origin.\n",a,b);

}
#include<stdio.h>
void even(int x)
{
	printf("Even numbers are:");
	while(x<=100)
	{
		printf("%d,",x);
		x=x+2;
	}
}
void odd(int x)
{
	printf("\nOdd numbers are:");
	while(x<=100)
	{
		printf("%d,",x);
		x=x+2;
	}
}
int main()
{
	int x=1;
	even(2);
	odd(1);
	return 0;
}

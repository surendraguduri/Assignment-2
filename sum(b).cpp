//wap to calculate the sum of numbers (10 numbers max)
// b) If the user enters a negative number, it's not added to the result
//ex b : user enters  1 - add to sum , 20 , add to sum , -1 - dont add to sum - go to next iteration - print sum 

#include<stdio.h>
int main()
{
	int n=1,x;
	int s=0;
	while(n<10)
	{
		scanf("%d\n",&x);
		if(x>=0)
		{
			s=s+x;
		}
		else
		{
			continue;
		}
		n++;
	}
	printf("sum = %d ",s);
	return 0;
}

//wap to calculate the sum of numbers (10 numbers max)
// a) If the user enters a negative number, the loop terminates
// ex a : user enters 1 - add to sum , 20, add to sum , 0 - terminate the loop and sum  should be printed 

 
#include<stdio.h>
int main()
{
	int n=10,x;
	int s=0;
	while(n)
	{
		scanf("%d\n",&x);
		if(x<0)
		{
			continue;
		}
		else if(x==0)
		{
			break;
		}
		else
		{
			s=s+x;
		}
		n--;
	}
	printf("%d ",s);
	return 0;
}

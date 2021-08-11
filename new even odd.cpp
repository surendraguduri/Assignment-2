#include<stdio.h>
int main()
{
    int i,j=0,k=0;
    int x=1,y=100;
    int a[50],b[50];
    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        {
            a[j]=i;
            j++;
        }
        else
        {
            b[k]=i;
            k++;
        }
    }
    printf("Even numbers are: ");
    for(i=0;i<y/2;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\nOdd numbers are: ");
    for(i=0;i<y/2;i++)
    {
        printf("%d,",b[i]);
    }
}

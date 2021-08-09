#include<stdio.h>
int main()
{
    int n=5;
    int i,j,k;
    int t=n;

    for(i=1;i<=n-1;i++)
    {
        for(j=t;j>0;j--)
        {
            printf(" ");
        }
        printf("/");
        for(k=2;k<2*i;k++)
        {
            printf(" ");
        }
        printf("\\");
        printf("\n");
        printf("\n");
        t--;
    }
    printf(" /________\\");
    
    return 0;
}

#include<stdio.h>
int main()
{
    int n=5;
    int i,j,k;
    int t=n;

    for(i=1;i<=n;i++)
    {
        for(j=t;j>0;j--)
        {
            printf(" ");
        }
        printf("/");
        for(k=2;k<2*i;k++)
        {
            if(i==5)
            {
                printf("_");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\\");
        printf("\n");
        printf("\n");
        t--;
    }
    
    return 0;
}

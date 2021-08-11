#include<stdio.h>
int  main()
{
    char z;
    double x,y;
    scanf("%lf %lf\n",&x,&y);
    scanf("%c",&z);
    switch(z)
    {
        case 'a':printf("%lf",x+y);
                break;
        case 's':printf("%lf",x-y);
                break;
        default:printf("default case-noaction");
    }
}


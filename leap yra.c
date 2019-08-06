#include<stdio.h>
main()
{
    int a,i;
    for(i=1;i>0;i++)
    {


    printf("\nenter year=");
    scanf("%d",&a);

    if(((a%4==0)&&(a%100!=0)) || a%400==0)
    {
        printf("the year is leap year");
    }
    else
    {
        printf("the year is not leap year");
    }

    }
}

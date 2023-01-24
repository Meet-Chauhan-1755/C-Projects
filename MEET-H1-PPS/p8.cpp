#include<stdio.h>
int main()
{
    int num;
    printf("enter any num-");
    scanf("%d",&num);
    if(num==0)
    {
        printf("/nenter num is zero");

    }
    else if(num>0)
    {
        printf("/nenter num is positive");
        }
        else
        {
            printf("/n enter num is negative");
                    }
return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers-");
    scanf("%d %d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("interchanging a=%d",a);
    printf("interchanging b=%d",b);
    return 0;


}

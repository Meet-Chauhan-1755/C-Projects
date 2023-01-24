#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers-");
    scanf("%d %d %d", &a,&b,&c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("interchanging a=%d",a);
    printf("interchanging b=%d",b);
    printf("interchanging c=%d",c);
    return 0;


}

#include<stdio.h>

int main()
{
    float num;
    printf("/nenter any num=");
    scanf("%f",&num);
    (num>0)?printf("num is pos"):(num<0)?printf("num is neg"):printf("num is zero");
    return 0;
}
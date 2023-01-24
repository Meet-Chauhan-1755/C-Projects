#include<stdio.h>
int main()
{
    float f,c;
    printf("\nenter temp in celsius-");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("temp in farenheit is=%f",f);
    return 0;
}
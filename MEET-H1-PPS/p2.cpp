#include<stdio.h>
int main()
{
    int n;
    float p,r,i;
    printf("\n enter amount:-");
    scanf("%f", &p);
    printf("\n enter no of years:-");
    scanf("%d", &n);
    printf("\n enter rate:-");
    scanf("%f", &r);
    i=p*r*n/100;
    printf("interest is=%f",i);
    return 0;
}
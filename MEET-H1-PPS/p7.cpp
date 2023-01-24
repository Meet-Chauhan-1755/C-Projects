#include<stdio.h>
int main()
{
    int t;
    float a,u,d;
    printf("/nenter a-");
    scanf("%f",&a);
    printf("/nenter u-");
    scanf("%f",&u);
    printf("/nenter t-");
    scanf("%d",&t);
    d=(u*t)+(a*t*t)/2;
    printf("/ndistance is=%d",d);
    return 0;
}
    
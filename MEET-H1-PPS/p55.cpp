#include<stdio.h>
int main()
{
    int a,b,temp;
    int *x,*y;
    printf("SIMPLE POINTER PROGRAM");
    printf("/n enter values for a nd b=");
    scanf("%d %d",&a,&b);

    x=&a;
    y=&b;

    temp=*y;
    *y=*x;
    *x=temp;
printf("AFTER SWAPPING");
   printf("/nvalue of a=%d",*x);
     printf("/nvalue of b=%d",*y);
      
return 0;
}
#include<stdio.h>
int main()
{
    int a;
    int *pt;
    printf("SIMPLE POINTER PROGRAM");
    a=10;
    pt=&a;
    printf("/nvalue of a=%d",a);
     printf("/nvalue of pt=%d",*pt);
      printf("/naddress of a=%p",pt);
return 0;
}
#include<stdio.h>
int main()
{
    int num;
    printf("enter the weekdays num-");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
    printf("MONDAY");
    break;
    case 2:
    printf("TUESDAY");
    break;
    case 3:
    printf("WEDNESDAY");
    break;
    case 4:
    printf("THURSDAY");
    break;
    case 5:
    printf("FRIDAY");
    break;
    case 6:
    printf("SATURDAY");
    break;
    case 7:
    printf("SUNDAY");
    break;
    default: 
    printf("enter valid output");
    break;
}
return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    float a,b,c;
    printf("\n enter two num=");
    scanf("%f %f",&a,&b);
    printf("\n enter the type of operation you want-");
    scanf("%c",&ch);
    switch(ch)
    {
    case '+': c=a+b;
    printf("ADDITION=%f",c);
    break;
    case '-': c=a-b;
    printf("SUBTRACTION=%f",c);
    break;
    case '*': c=a*b;
    printf("MULTIPLICATION=%f",c);
    break;
    case '/': c=a/b;
    printf("DIVISION=%f",c);
    break;
    default: 
    printf("enter valid output");
    break;
    }
return 0;
}
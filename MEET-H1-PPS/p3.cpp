#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div;
    printf("enter two numbers:-");
    scanf("%d %d", &a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\n addition=%d",add);
    printf("\n subtraction=%d",sub);
    printf("\n multiplication=%d",mul);
    printf("\n division=%d",div);
    return 0;
}
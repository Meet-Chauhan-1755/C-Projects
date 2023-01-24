#include<stdio.h>
int main()
{
    int a,b,c;
    printf("/nenter first num-");
    scanf("%d",&a);
    printf("/nenter second num-");
    scanf("%d",&b);
    printf("/nenter third num-");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("/na is max");
        }
        else{
            printf("/n c is max");
        }
    }
    else
    {
        if(b>c){
            printf("/nb is max");
        }
        else
        {
            printf("c is max");
        }
    }
return 0;
}
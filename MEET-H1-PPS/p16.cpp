 #include<stdio.h>
 int main()
{
    int i;
    printf("\n enter a num-");
    scanf("%d",&i);
    if((i%10)%2==0)
   { printf("\n entered num is even");}
    else
    {
        printf("entered num is odd");
    }
    return 0;
}
 #include<stdio.h>
 int main()
{
    int no,fact=1;
    printf("\n enter a num-");
    scanf("%d",&no);
   while(no>1)
   {
    fact=fact*no;
    no=no-1;
   }
   printf("factorial of entered num is=%d",fact);
    return 0;
}
#include<stdio.h>
 int main()
{
    int no,rev=0;
    printf("\n enter a num-");
    scanf("%d",&no);
   while(no>0)
   {
    rev=(rev*10)+(no%10);
    no=no/10;
   }
     if(no==rev)
    {printf("no is palindrome");}
    else
    {printf("reversed num is=%d",rev);}
   }
    return 0;
}
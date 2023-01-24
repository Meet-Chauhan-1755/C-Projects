#include<stdio.h>
int main()
{
    int marks;
    printf("/nenter marks-");
    scanf("%d",&marks);
    if(marks<100 || marks>0)
    {
        printf("invalid");}
        else if(marks>=80)
        {printf("/ndistinction");}
        else if(marks>=60)
        {printf("/ndfirstclass");}
        else if(marks>=40)
        {printf("/nsecond class");}
        
    

        
        
    
    else
    {
        printf("fail");
    }
return 0;
}
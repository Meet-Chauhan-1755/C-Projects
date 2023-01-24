#include<stdio.h>
int main()
{
    char ch;
    printf("/nenter any character-");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("enter char is digit");
    }
        else if(ch>='A' && ch<='Z')
        {
            printf("/alphabet is capital");
        }
        else if(ch>='a' && ch<='z')
        {
            printf("/n alphabet small");
        }
    
    else
    {
        printf("it is special character");
    }
return 0;
}
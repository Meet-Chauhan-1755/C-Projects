#include<stdio.h>
int main()
{
    int i=0;
    char s[50];
    printf("Enter String : ");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='a')
        {
            s[i]='*';
        }
        i++;
    }
    printf("-------------------------------------");
    printf("\nString After Replacing 'a' by '*'");
    printf("\n-------------------------------------\n");
    printf("%s",s);
    return 0;
}
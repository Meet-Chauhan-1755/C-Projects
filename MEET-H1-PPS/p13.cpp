#include<stdio.h>
int main()
{
    char ch;
    printf("/nenter anY ALPHABET-");
    scanf("%c",&ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        
        {
            printf("/alphabet is VOWEL");
        }
        
    
    else
    {
        printf("CONSONENT");
    }
return 0;
}
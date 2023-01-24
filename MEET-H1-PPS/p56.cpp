#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[10];
    char *ptr;
    int i;
    printf("enter string-");
    gets(str);
    for(i=0;str[i]!=NULL;i++){
        ptr = &str[i];
        printf("address of character %c is %p\n",str[i],ptr);
    }
    return 0;

}
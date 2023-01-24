#include<stdio.h>
int main(){
    int num[10],n=0,i;
    printf("enter how many values you want to enter-");
    scanf("%d",&n);
    printf("enter values-");
    for(i=0;i<n;++i){
        scanf("%d",num+1);
    }
    printf("entered elements");
    for(i=0;i<n;++i){
        printf("\n%d",*(num+1));
    }
return 0;

}

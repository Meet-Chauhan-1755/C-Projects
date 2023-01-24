#include<stdio.h>
#include<math.h>

int add(int,int);
int fact(int);

int main() {
  int n, x;
  float sum = 0;
  printf("\n Enter Value of X :");
  scanf("%d", & x);
  printf("\n Enter no of iteration n :");
  scanf("%d", & n);
  sum = add(x, n);
  printf("Sum = %f", sum);
  return 0;
}

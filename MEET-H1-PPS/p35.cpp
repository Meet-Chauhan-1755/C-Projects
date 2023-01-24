#include<math.h>
#include<stdio.h>

int main() {
  float a[50], sum = 0, sum1 = 0, sum2 = 1;
  int i, n;
  printf("\nHow many numbers you want to enter :");
  scanf("%d", & n);
  for (i = 0; i < n; i++) {
    printf("\nEnter Value at Position [%d] : ", i + 1);
    scanf("%f",&a[i]);
    sum = sum + a[i];
    sum1 = sum1 + (1.0 / a[i]);
    sum2 = sum2 * a[i];
  }
  printf("\nAverage = %f", sum / n);
  printf("\nGeometric Mean = %f", pow(sum2, (1.0 / n)));
  printf("\nHarmonic Mean = %f", n * pow(sum1, -1));
  return 0;
}

#include <stdio.h>
int GetsumOfDigits(int n) {
 int sum = 0;
 while (n > 0) {
 sum = sum+(n % 10);
 n = n/10;
 }
 return sum;
 }
int main() {
 int n;
 printf("Enter a positive integer: ");  scanf("%d", &n);
 int result = GetsumOfDigits(n);  printf("Sum of digits = %d\n", result);
 return 0;
}


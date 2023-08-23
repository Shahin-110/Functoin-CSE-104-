
#include <stdio.h>
void PrintFibonacci(int n)
{
 int Previous = 0, Current = 1;  printf("The Fibonacci Series: ");
 for (int i = 0; i < n; i++)
 {
 printf("%d ", Previous);  int Next = Previous + Current;  Previous = Current;
 Current =Next;
 }
 printf("\n");
}
int main()
{
 int n;
 printf("Enter the value of n: ");  scanf("%d", &n);
 PrintFibonacci(n);
 return 0;
}

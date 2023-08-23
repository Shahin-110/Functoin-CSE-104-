#include <stdio.h>
void printFirstNEvenNumbers(int n)
{
    int i;
    printf("Even Numbers: ");
    for ( i = 1; i <= n; i++)
    {
        printf("%d", 2 * i);
        if (i < n)
        {
            printf(", ");
        }
    }
    printf("\n");
}
int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printFirstNEvenNumbers(n);
    return 0;
}


/* Write a C function that checksif a given positive integer is a prime number .The function should be take an integer as input and return whetherit is prime or not */

#include <stdio.h>
int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n <= 3)
    {
        return 1;
        if (n % 2 == 0 || n % 3 == 0)
        {
            return 0;
        }
        for (int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    int main()
    {
        int n;
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Please enter a positive integer.\n");
        }
        else if (is_prime(n))
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
        return 0;
    }

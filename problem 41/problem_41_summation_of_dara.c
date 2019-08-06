/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
// this function is used for returning factorial of a number
unsigned long long fact(int n)
{
    unsigned long long sum = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    // used for testcases
    for (i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);
        int j = 1;
        double sum = 0;
        // using loop , we are making sum from 1 to that number
        while (j <= number)
        {
            sum += (double)j / fact(j);
            j++;
        }
        printf("%0.4lf\n", sum);
    }

    return 0;
}

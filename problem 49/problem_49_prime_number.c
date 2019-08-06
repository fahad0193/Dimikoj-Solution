/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    // used for test cases
    for (i = 0; i < n; i++)
    {
        unsigned long long x;
        scanf("%llu", &x);

        if (x % 2 == 0 && x != 2)
        {
            printf("%llu is not a prime\n", x);
            continue;
        }
        int flag = 0;
        unsigned long long j;
        // loop used for chekcing wheather it's prime number or not
        for (j = 3; j <= sqrt(x); j += 2)
        {
            if (x % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            printf("%llu is not a prime\n", x);
        else
            printf("%llu is a prime\n", x);
    }

    return 0;
}

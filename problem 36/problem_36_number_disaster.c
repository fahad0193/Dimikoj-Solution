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
        long long a;
        scanf("%lld", &a);
        long long sum = 0;
        // reversing number
        while (a != 0)
        {
            sum *= 10;
            sum += a % 10;
            a /= 10;
        }
        printf("%lld\n", sum);
    }

    return 0;
}

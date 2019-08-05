/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int i;
    // used for test cases
    for (i = 0; i < n; i++)
    {
        unsigned long long a, b, c;
        scanf("%llu %llu %llu", &a, &b, &c);
        // multipying a and b and storing that value in d
        unsigned long long d = a * b;
        // storing value of d in a
        a = d;
        // printing all ouput using loop
        while (d <= c)
        {
            printf("%llu\n", d);
            d += a;
        }
        if (i != n - 1)
            printf("\n");
    }

    return 0;
}

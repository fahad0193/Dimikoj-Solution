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
        //taking 3 number input
        scanf("%llu %llu %llu", &a, &b, &c);
        // used loop for printing all divisible number between a and b
        while (a <= b)
        {
            if (a % c == 0)
            {
                printf("%llu\n", a);
                a += c;
                continue;
            }
            a++;
        }
        printf("\n");
    }

    return 0;
}

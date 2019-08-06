/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
int main()
{
    long long num;
    int flag = 0;
    //used for end of file time input
    while (scanf("%lld", &num) == 1)
    {
        if (num < 0)
        {
            break;
        }
        if (flag)
        {
            printf("\n");
        }
        while (num % 2 == 0)
        {
            printf("    2\n");
            num /= 2;
        }
        long long try;
        for (try = 3; try <= sqrt(num); try += 2)
        {
            while (num % try == 0)
            {
                printf("    %lld\n", try);
                num /= try ;
            }
        }
        if (num > 2)
        {
            printf("    %lld\n", num);
        }
        flag = 1;
    }

    return 0;
}

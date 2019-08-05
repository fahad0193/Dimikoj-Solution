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
        long long a, b;
        // taking input from user
        scanf("%lld %lld", &a, &b);

        // printing accoring to the condition
        if (a > b)
        {
            printf("Invalid!\n");
        }
        else
        {
            long long temp = a;
            //storing a initial value in temp
            // and we will increase value of a by temp
            while (a <= b)
            {
                printf("%lld\n", a);
                a += temp;
            }
        }

        printf("\n");
    }

    return 0;
}

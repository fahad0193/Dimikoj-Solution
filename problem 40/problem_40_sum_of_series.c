/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    //used for test cases
    for (i = 0; i < n; i++)
    {
        int x, k;
        scanf("%d %d", &x, &k);
        long long result = 0;
        int j;
        // using loop, we adding value to result variable
        for (j = 0; j <= k; j++)
        {
            result += pow(x, j);
        }
        printf("Result = %lld\n", result);
    }

    return 0;
}

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
        int f;
        scanf("%d", &f);
        int ara[f];
        int j;
        // used for taking first array input
        for (j = 0; j < f; j++)
        {
            scanf("%d", &ara[j]);
        }
        int f2;
        scanf("%d", &f2);
        int ara2[f2];
        int k;
        // used for taking second array as input
        for (k = 0; k < f2; k++)
        {
            scanf("%d", &ara2[k]);
        }
        int added[f + f2];
        int l;
        // checking which element is less and storing that in added array
        for (j = 0, k = 0, l = 0; j < f && k < f2; l++)
        {
            if (ara[j] < ara2[k])
            {
                added[l] = ara[j];
                j++;
            }
            else
            {
                added[l] = ara2[k];
                k++;
            }
        }
        // if upper loop is end and j is less than f then we used this loop for storing all remaining element of ara to added array
        while (j < f)
        {
            added[l] = ara[j];
            j++;
            l++;
        }
        // if upper loop is end and k is less than f2 then we used this loop for storing all remaining element of ara2 to added array
        while (k < f2)
        {
            added[l] = ara2[k];
            k++;
            l++;
        }
        // this loop is used for printing all element of added array
        for (l = 0; l < f + f2; l++)
        {
            if (l == 0)
            {
                printf("%d", added[l]);
            }
            else
            {
                printf(" %d", added[l]);
            }
        }
        printf("\n");
    }

    return 0;
}

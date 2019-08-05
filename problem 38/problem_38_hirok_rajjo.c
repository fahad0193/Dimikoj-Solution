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
        int r, num;
        scanf("%d %d", &r, &num);
        int j, k;
        // used for printing upper triangle 
        for (j = 0; j < r; j++)
        {
            for (k = 0; k <= j; k++)
            {
                if (k == j)
                    printf("%d", num);
                else
                {
                    printf("%d ", num);
                }
            }
            printf("\n");
        }
        // used for printing lower triangle
        for (j = r - 1; j > 0; j--)
        {
            for (k = 0; k < j; k++)
            {
                if (k == j - 1)
                    printf("%d", num);
                else
                {
                    printf("%d ", num);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

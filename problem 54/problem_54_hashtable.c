/*Bismillahir Rahmanir Rahim */
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    // used for test cases
    int i;
    for (i = 0; i < n; i++)
    {
        char str[1000];
        char str2[1000];
        scanf("%s", str);
        scanf("%s", str2);
        int j = 0, k = 0;
        int sum1 = 1;
        // used for multipying 
        while (str[j] != '\0')
        {
            sum1 *=(int)str[j];
            sum1 %= 97;
            j++;
        }
        j = 0;
        int sum2 = 1;
        // used for multipication
        while (str2[j] != '\0')
        {
            sum2 *=(int) str2[j];
            sum2 %= 97;
            j++;
        }
        if (sum1 == sum2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
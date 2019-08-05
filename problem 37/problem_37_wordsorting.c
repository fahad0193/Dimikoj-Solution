/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    getchar();
    char str[n][22];
    // used for taking string input
    for (i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    int j;
    // used for sorting alphabetical order
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                char temp[22];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    // used for printing string using puts function
    for (i = 0; i < n; i++)
    {
        puts(str[i]);
    }

    return 0;
}

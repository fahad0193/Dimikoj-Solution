#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    // used for test cases
    int i;
    for (i = 0; i < n; i++)
    {
        char str[60];
        gets(str);
        int j = 0;
        //used for changing element of the string
        while (str[j] != '\0')
        {
            if (str[j] == 'L')
            {
                str[j] = str[j - 1];
            }
            else if (str[j] == 'R')
            {
                str[j] = str[j + 1];
            }
            j++;
        }
        puts(str);
    }

    return 0;
}
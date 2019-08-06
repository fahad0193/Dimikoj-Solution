/*Bismillahir Rahmanir Rahim */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    scanf("%[^\t\n]s", str);
    int num;
    scanf("%d", &num);
    int j = 0;
    int l = strlen(str);
    while (j < l)
    {
        if (str[j] != ' ')
        {
            if (str[j] >= 'a' && str[j] <= 'z')
            {
                str[j] = str[j] + num;
                if (str[j] < 97 || str[j] > 122)
                {
                    str[j] = (str[j] - 122) + 96;
                }
            }
            else if (str[j] >= 'A' && str[j] <= 'Z')
            {
                str[j] = str[j] + num;
                if (str[j] > 90)
                {
                    str[j] = str[j] - 90 + 64;
                }
            }
        }

        j++;
    }
    puts(str);

    return 0;
}
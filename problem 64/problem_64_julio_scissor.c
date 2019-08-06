#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    gets(str);
    int num;
    scanf("%d", &num);
    int j = 0;
    while (str[j] != '\0')
    {
        if ((str[j] >= 'a' && str[j] <= 'z'))
        {
            str[j] = str[j] - num;
            if (str[j] < 97)
            {
                str[j] = str[j] + 26;
            }
        }
        else if ((str[j] >= 'A' && str[j] <= 'Z'))
        {
            str[j] = str[j] - num;
            if (str[j] < 65)
            {
                str[j] = str[j] + 26;
            }
        }
        j++;
    }
    puts(str);

    return 0;
}
/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    // used for flushing unwanted keypress '\n'
    getchar();
    int i;
    // used for test cases
    for (i = 0; i < n; i++)
    {
        char str[100];
        gets(str);
        char str2[100];
        int l = strlen(str);
        str2[l] = '\0';
        l--;
        int j = 0;
        // reversing string
        while (l >= 0)
        {
            str2[l] = str[j];
            l--;
            j++;
        }
        // chekcing palindrome or not
        if (strcmp(str, str2) == 0)
        {
            printf("Yes! It is Palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not Palindrome!\n");
        }
    }

    return 0;
}

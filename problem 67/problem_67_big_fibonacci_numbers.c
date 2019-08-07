#include <stdio.h>
#include <string.h>
//this function will return string
void add(char str4[], char str5[], char *str3)
{
    int j = 0;
    char str1[2000];
    char str2[2000];
    strcpy(str1, str4);
    strcpy(str2, str5);
    int l = strlen(str1) - 1;
    while (j <= l)
    {
        char temp;
        temp = str1[j];
        str1[j] = str1[l];
        str1[l] = temp;
        j++;
        l--;
    }
    j = 0;
    l = strlen(str2) - 1;
    while (j <= l)
    {
        char temp;
        temp = str2[j];
        str2[j] = str2[l];
        str2[l] = temp;
        j++;
        l--;
    }
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int i = 0;
    int carry = 0;
    int num = 0;
    int k = 0;
    while (i < l1 && i < l2)
    {
        num = (str1[i] - 48) + (str2[i] - 48) + carry;
        str3[k] = ((num % 10) + '0');
        carry = num / 10;
        i++;
        k++;
    }
    while (i < l1)
    {
        num = (str1[i] - 48) + carry;
        str3[k] = ((num % 10) + '0');
        carry = num / 10;
        i++;
        k++;
    }
    while (i < l2)
    {
        num = (str2[i] - 48) + carry;
        str3[k] = ((num % 10) + '0');
        carry = num / 10;
        i++;
        k++;
    }
    if (carry)
    {
        str3[k] = (carry + '0');
        k++;
    }
    str3[k] = '\0';
    j = 0;
    l = strlen(str3) - 1;
    while (j <= l)
    {
        char temp;
        temp = str3[j];
        str3[j] = str3[l];
        str3[l] = temp;
        j++;
        l--;
    }
}
int main()
{
    char str1[2000] = "0";
    char str2[2000] = "1";
    //adding first sum of st1 and str2 and storing that value in str3
    char str3[2000];
    int num;
    //this loop is used for generating fibonacci number
    scanf("%d", &num);
    int i;
    for (i = 0; i < num; i++)
    {
        add(str1, str2, str3);
        strcpy(str1, str2);
        strcpy(str2, str3);
    }
    // printing fibonacci number
    puts(str1);
    return 0;
}
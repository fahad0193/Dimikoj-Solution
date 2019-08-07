#include <bits/stdc++.h>
using namespace std;
//this function will return string
string add(string str1, string str2)
{
    string str3 = "";
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int l1 = str1.size();
    int l2 = str2.size();
    int i = 0;
    int carry = 0;
    int num = 0;
    while (i < l1 && i < l2)
    {
        num = (str1[i] - 48) + (str2[i] - 48) + carry;
        str3 += ((num % 10) + '0');
        carry = num / 10;
        i++;
    }
    while (i < l1)
    {
        num = (str1[i] - 48) + carry;
        str3 += ((num % 10) + '0');
        carry = num / 10;
        i++;
    }
    while (i < l2)
    {
        num = (str2[i] - 48) + carry;
        str3 += ((num % 10) + '0');
        carry = num / 10;
        i++;
    }
    if (carry)
    {
        str3 += (carry + '0');
    }
    reverse(str3.begin(), str3.end());
    return str3;
}
int main()
{
    string str1 = "0";
    string str2 = "1";
    //adding first sum of st1 and str2 and storing that value in str3
    string str3 = add(str1, str2);
    int num;
    //this loop is used for generating fibonacci number
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        str3 = add(str1, str2);
        str2 = str1;
        str1 = str3;
    }
    // printing fibonacci number
    cout << str1 << endl;
    return 0;
}
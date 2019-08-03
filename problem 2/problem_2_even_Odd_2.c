/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int i;
    for(i=1; i<=n; i++)
    {
        //digits can be at most 100... so, no variable can store 100 digits in c and c++
        // so, we have to use string
        char str[120];
        scanf("%s",str);
        int l=strlen(str);

        // if a numbers last digits is even then the number is even . such as
        // 4232 here last digit is 2 and it's even .. so, 4232 is even
        if(str[l-1]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }


    return 0;
}


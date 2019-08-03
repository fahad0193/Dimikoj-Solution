/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=1; i<=n; i++)
    {
        int num;
        scanf("%d",&num);
        unsigned long long int fact=1;
        int j;
        //used for multiplying fact for 1 to number
        for(j=1; j<=num; j++)
        {
            fact*=j;
        }
        printf("%llu\n",fact);

    }

    return 0;
}

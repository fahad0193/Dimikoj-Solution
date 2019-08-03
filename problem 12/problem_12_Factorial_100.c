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
        long long x=5;
        int cnt=0;
        //counting how much zero that numbers factorial have
        while(x<=num)
        {
            cnt+=num/x;
            x*=5;
        }
        printf("%d\n",cnt);
    }


    return 0;
}



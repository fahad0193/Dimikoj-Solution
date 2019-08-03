/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i++)
    {
        int num;
        scanf("%d",&num);
        printf("Case %d:",i);
        int j;
        //this loop used for for printing divisor
        for(j=1; j<=num; j++)
        {
            // if num can be devided by j then , j is a divisor of this number
            if(num%j==0)
            {
                printf(" %d",j);
            }
        }
        printf("\n");

    }

    return 0;
}



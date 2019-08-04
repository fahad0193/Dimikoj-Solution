/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=0; i<n; i++)
    {
        double num;
        int cnt=0;
        scanf("%lf",&num);
        //counting days
        //the alien sir, eats half of his food each day
        //so, we devide total food by 2
        while(num>=1)
        {
            cnt++;
            num/=2.0;
        }
        printf("%d days\n",cnt);

    }


    return 0;
}



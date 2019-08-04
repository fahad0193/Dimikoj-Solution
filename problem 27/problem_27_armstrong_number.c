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
        int num;
        int cnt=0;
        scanf("%d",&num);
        int sum=0;
        int temp=num;
        //we are storing every digits value in sum like a*a*a
        while(temp!=0)
        {
            int rem=temp%10;
            sum+=rem*rem*rem;
            temp/=10;
        }
        if(num==sum)
            printf("%d is an armstrong number!\n",num);
        else
            printf("%d is not an armstrong number!\n",num);

    }


    return 0;
}




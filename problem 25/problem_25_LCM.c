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

        unsigned long long a,b;
        scanf("%llu %llu",&a,&b);
        //storing a and b in mx and mn
        unsigned long long mx=a,mn=b;
        //if b is smaller than a then we change value of mx and mn
        // and set a as maximum value
        if(b>a)
        {
            mx=b;
            mn=a;
            a=mx;
        }
        //used for finding LCM
        //we increase mx value by a
        while(mx%mn!=0)
        {
            mx+=a;
        }
        printf("LCM = %llu\n",mx);

    }


    return 0;
}




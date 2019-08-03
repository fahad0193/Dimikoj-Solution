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
        //we are storing square root of num and storing that in a rootnum variable...
        // we know int can't store precision of a number.so,it just store the number without precision
        int rootnum=sqrt(num);
        //if without precision number and the squareroot of the number is equal then it's a square number
        //sqrt() function return a float value
        if(rootnum==sqrt(num))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}




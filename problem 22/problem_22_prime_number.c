/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
#include<math.h>

//this function will check wheather it's prime or not..
//if the number is prime then this function will simply return 1
// else it will return 0
//and we will add the return value to cnt
int primeornot(int x)
{
    int i;
    for(i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=0; i<n; i++)
    {

        int a,b;
        scanf("%d %d",&a,&b);
        int cnt=0;
        //creating a loop from a to b
        while(a<=b)
        {
            //1 and 0 is not prime number so, if a=1 or a=0 we won't check prime or not
            if(a==1 || a==0)
            {
                a++;
                continue;
            }
            //adding returning value to cnt
            cnt+=primeornot(a);
            a++;
        }
        printf("%d\n",cnt);

    }


    return 0;
}



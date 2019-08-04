/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        int sum=0;
        int j;
        //used for check divisor and make their sum
        for(j=1;j<=num/2;j++){
            if(num%j==0){
                sum+=j;
            }
        }
        if(sum==num){
            printf("YES, %d is a perfect number!\n",num);
        }
        else{
            printf("NO, %d is not a perfect number!\n",num);
        }

    }

    return 0;
}



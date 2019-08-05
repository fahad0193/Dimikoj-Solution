/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=0;i<n;i++){
        long long num;
        scanf("%lld",&num);
        //we have find perfect number menually by coding
        //we can't submit that's code.. because that will show us time limit ..
        //so, we used this condition
            if(num>=6){
                printf("6\n");
            }
            if(num>=28){
                printf("28\n");
            }
            if(num>=496){
                printf("496\n");
            }
            if(num>=8128){
                printf("8128\n");
            }
            if(num>=33550336){
                printf("33550336\n");
            }

        if(i!=n-1)
        printf("\n");
    }
    return  0;
}

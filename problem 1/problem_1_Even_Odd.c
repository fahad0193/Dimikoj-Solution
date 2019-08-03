/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int i;
    //used for test cases
    for(i=1;i<=n;i++){
        int num;
        scanf("%d",&num);

        //checking number is odd or even
        if(num%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }

    }


    return 0;
}

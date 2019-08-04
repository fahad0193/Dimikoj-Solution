/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mx=-974934;
    int i;
    int num;
    int flag=0;
    //used for taking number input and check wheather it's lesser than previous
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num>=mx){
            mx=num;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

    return 0;
}



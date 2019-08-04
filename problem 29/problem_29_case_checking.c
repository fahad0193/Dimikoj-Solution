/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=0;i<n;i++){
        char ch;
        //used for flushing unwanted keypress '\n'
        getchar();
        ch=getchar();
        if(ch>='a' && ch<='z'){
            printf("Lowercase Character");
        }
        else if(ch>='A' && ch<='Z'){
            printf("Uppercase Character");
        }
        else if(ch>='0' && ch<='9'){
            printf("Numerical Digit");
        }
        else{
            printf("Special Character");
        }
        printf("\n");
    }


    return 0;
}



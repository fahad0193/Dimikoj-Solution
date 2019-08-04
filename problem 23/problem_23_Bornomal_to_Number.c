/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //used for flushing unwanted keypress '\n'
    getchar();
    int i;
    //used for test cases
    for(i=0; i<n; i++)
    {
        char str[101];
        gets(str);
        int num;
        int j=0;
        //checking charecter and printing output for that charecter
        while(str[j]!='\0')
        {

            num=str[j]-'A'+1;
            printf("%d",num);
            j++;
        }
        printf("\n");

    }


    return 0;
}



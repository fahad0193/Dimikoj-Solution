/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
#include<string.h>
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
        char str[1001];
        gets(str);
        int l=strlen(str)-1;
        //printing string in reverse order
        while(l>=0)
        {
            printf("%c",str[l]);
            l--;
        }
        printf("\n");

    }


    return 0;
}



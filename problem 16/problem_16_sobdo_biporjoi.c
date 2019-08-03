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
        char str[1002];
        //taking string input
        gets(str);
        int j=0;
        int l=strlen(str);
        int temp1=-1;

        //printing strings word in reverse order

        for(j=0; j<=l; j++)
        {
            if(str[j]==' ' || str[j]=='\0')
            {
                if(temp1!=-1)
                    printf(" ");
                int end=j-1;
                while(end>temp1)
                {
                    printf("%c",str[end]);
                    end--;
                }
                temp1=j;
            }
        }
        printf("\n");

    }

    return 0;
}



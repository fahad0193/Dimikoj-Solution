/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for flushing unwanted keypress '\n'
    getchar();
    //used for test cases
    for(i=0; i<n; i++)
    {
        char str[10000];
        gets(str);
        int cnt=0;
        int flag=0;
        int j=0;
        //loop used for counting word
        while(str[j]!='\0')
        {
            if(str[j]==' ')
            {
                flag=0;
            }
            else if(str[j]!=' ' && flag==0)
            {
                cnt++;
                flag=1;
            }

            j++;
        }

        printf("Count = %d\n",cnt);

    }


    return 0;
}




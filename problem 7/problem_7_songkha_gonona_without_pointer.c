/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    // used getchar() for flushing unwanted '\n'
    getchar();
    int i;
        //used for test cases
    for(i=1; i<=n; i++)
    {
        char str[100001];
        gets(str);
        int cnt=0;
        int i=0;
        int flag=0;
        // this loop will run, untill it reach at the end of the string
        //and we used some condition for counting only words
        while(str[i]!='\0')
        {
            if( ((str[i]>='0' && str[i]<='9') || str[i]=='-' ) && flag==0 )
            {
                cnt++;
                flag=1;
            }
            else if(!((str[i]>='0' && str[i]<='9') || str[i]=='-' ) && flag==1)
            {
                flag=0;
            }
            i++;
        }
        printf("%d\n",cnt);
    }


    return 0;
}



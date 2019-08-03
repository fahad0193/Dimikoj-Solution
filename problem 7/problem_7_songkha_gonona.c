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
        char *end=strtok(str," ");
        int cnt=0;
        //we used charecter pointer and strtok() function for counting
        while(end!=NULL)
        {
            end=strtok(NULL," ");
            cnt++;
        }
        printf("%d\n",cnt);
    }


    return 0;
}


/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    getchar();
    for(i=0; i<n; i++)
    {
        int ara[55]= {0};
        char str[1002];
        gets(str);
        int j=0;
        while(str[j]!='\0')
        {
            if(str[j]>='A' && str[j]<='Z')
                ara[str[i]-'A']++;
            else if(str[j]>='a' && str[j]<='z')
                ara[str[j]-'a'+26]++;
            j++;
        }
        for(j=0; j<55; j++)
        {
            if(ara[j]>0)
            {
                if(j<26)
                    printf("%c = %d\n",j+'A', ara[j]);
                else
                    printf("%c = %d\n",j+'a'-26, ara[j]);
            }

        }
        if(i!=n-1)
        {
            printf("\n");
        }

    }

    return 0;
}



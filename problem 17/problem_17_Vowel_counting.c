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
        char str[1001];
        gets(str);
        int j=0;
        int cnt=0;
        while(str[j]!='\0')
        {
            if(str[j]=='a' || str[j]=='A' || str[j]=='e' || str[j]=='E' || str[j]=='i' || str[j]=='I'  || str[j]=='o' || str[j]=='O' || str[j]=='u' || str[j]=='U' )
            {
                cnt++;
            }

            j++;
        }
        printf("Number of vowels = %d\n",cnt);


    }

    return 0;
}



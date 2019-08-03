/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
#include<string.h>
int main()
{

    int n;
    scanf("%d",&n);
    int i;
    getchar();
    //used for test cases
    for(i=0; i<n; i++)
    {
        char str[1001];
        gets(str);
        int j=0;
        char vowel[1001];
        char consonent[1001];
        int k=0,l=0;
        //if charecter is vowel then we will store that in vowel string else we will store that in consonent string
        while(str[j]!='\0')
        {
            if(str[j]==' ')
            {
                j++;
                continue;
            }
            if((str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[j]<='Z'))
            {
                if(str[j]=='a' || str[j]=='A' || str[j]=='e' || str[j]=='E' || str[j]=='i' || str[j]=='I'  || str[j]=='o' || str[j]=='O' || str[j]=='u' || str[j]=='U' )
                {
                    vowel[k]=str[j];
                    k++;
                }
                else
                {
                    consonent[l]=str[j];
                    l++;
                }
            }
            j++;
        }
        //terminating string by NULL charecter
        vowel[k]='\0';
        consonent[l]='\0';

        printf("%s\n",vowel);
        printf("%s\n",consonent);


    }

    return 0;
}




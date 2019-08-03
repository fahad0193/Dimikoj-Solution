/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=0; i<n; i++)
    {
        char str[10001];
        char ch;
        //used for unwanted keypress '\n'
        getchar();
        //taking string input
        gets(str);
        //taking charecter input
        ch=getchar();
        int j=0;
        int cnt=0;
        //used for counting how much ch this string have
        while(str[j]!='\0')
        {
            if(str[j]==ch)
                cnt++;

            j++;
        }
        //printing output
        if(cnt>0){
            printf("Occurrence of '%c' in '%s' = %d\n",ch,str,cnt);
        }
        else{
            printf("'%c' is not present\n",ch);
        }

    }



    return 0;
}



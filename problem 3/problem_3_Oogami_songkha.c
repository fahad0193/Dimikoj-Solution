/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{

    int i;
    for(i=1000; i>0; i--)
    {
        printf("%d ",i);
        //for example, when i=96 , then 96-1=95 and it's can be devided by 5 . so
        // it will take a new line
        if( (i-1)%5==0)
        {
            printf("\n");
        }
    }

    return 0;
}

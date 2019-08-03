/*Bismillahir Rahmanir Rahim*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=1; i<=n; i++)
    {
        int num;
        scanf("%d",&num);
        int j,k;
        // used for printing pattern
        for(j=0; j<num; j++)
        {
            for(k=0; k<num; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        // we should't print new line at the last test cases.. so , we, used this condition
        if(i!=n)
        {
            printf("\n");
        }

    }


    return 0;
}



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
        int proti,amar,baki;
        scanf("%d %d %d",&proti,&amar,&baki);
        printf("%0.2lf ",(double)(amar*6)/(300-baki) );
        // if my run is greater than opponents run , then we don't need any run.. so, required runrate is zero
        if(proti-amar<0)
        {
            printf("%0.2lf\n",0.0 );
            continue;
        }
        ++proti; // if i wanna win, i have to make atleast 1 more run than opponents so, we just increament it
        printf("%0.2lf\n",(double)( (proti-amar)*6)/baki );
    }


    return 0;
}



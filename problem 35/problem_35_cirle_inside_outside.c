/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    // used for test cases
    for (i = 0; i < n; i++)
    {
        double x1, y1;
        double r;
        double x2, y2;
        //taking input
        scanf("%lf %lf", &x1, &y1);
        scanf("%lf", &r);
        scanf("%lf %lf", &x2, &y2);
        // couting distance from (x1,y2) to (x2,y2) and storing that value in l 
        double l=sqrt( ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)) );
        if(l<=r){
            printf("The point is inside the circle\n");
        }
        else{
            printf("The point is not inside the circle\n");
        }
    }

    return 0;
}

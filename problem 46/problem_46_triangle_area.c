/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    // used for test cases
    for (i = 0; i < n; i++)
    {
        double a, b, c, s;
        scanf("%lf %lf %lf", &a, &b, &c);
        s = (a + b + c) / 2;
        // calculating area using formula
        s = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area = %0.3lf\n", s);
    }

    return 0;
}

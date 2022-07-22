#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    a=a*3.5;
    b=b*7.5;
    c=(a+b)/(3.5+7.5);
    printf("MEDIA = %.5lf\n",c);
    return 0;
}

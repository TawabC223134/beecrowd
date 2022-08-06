#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=a+b+c;
    e=((a+b)*c)/2;
    if(((b+c)>a) && ((a+b)>c) && ((c+a)>b))
    {
        printf("Perimetro = %.1lf\n",d);
    }
    else
    {
        printf("Area = %.1lf\n",e);
    }

}

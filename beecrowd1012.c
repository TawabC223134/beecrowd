#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=.5*a*c;
    e=3.14159*c*c;
    f=.5*(a+b)*c;
    g=b*b;
    h=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",d,e,f,g,h);
    return 0;

}

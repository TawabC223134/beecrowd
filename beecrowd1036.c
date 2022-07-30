#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,b1,c,d,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    b1=pow(b,2);
    d=sqrt(b1-(4*a*c));
    //d=sqrt(d);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    if(b1-(4*a*c)<0 || a==0)
    {
        printf("Impossivel calcular\n");

    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);


    }


}

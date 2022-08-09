#include<stdio.h>
int main()
{
    double a,b,c,d,e,tax1;
    scanf("%lf",&a);
    if(a>=0 && a<=2000)
    {
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000 )
    {
        b=a-2000;
        tax1=(b*8)/100;
        printf("R$ %.2lf\n",tax1);
    }
    else if(a>=3000.01 && a<=4500 )
    {
        b=80;
        c=a-3000;
        d=(c*18)/100;
        tax1=d+b;
        printf("R$ %.2lf\n",tax1);

    }
    else if(a>4500)
    {
        b=80;
        e=270;
        c=a-4500;
        d=(c*28)/100;
        tax1=d+b+e;
        printf("R$ %.2lf\n",tax1);
    }
    return 0;
}

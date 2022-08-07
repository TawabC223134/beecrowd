#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    a=a*2;
    b=b*3;
    c=c*4;
    d=d*1;
    e=(a+b+c+d)/10;
    if(e>=7)
    {
        printf("Media: %.1lf\nAluno aprovado.\n",e);
    }
    else if(e<5)
    {
        printf("Media: %.1lf\nAluno reprovado.\n",e);
    }
    else if(e>=5 && e<=6.9)
    {
        double f;
        scanf("%lf",&f);
        g=(e+f)/2;
        printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\n",e,f);
        if(g>=5)
        {
            printf("Aluno aprovado.\nMedia final: %.1lf\n",g);
        }
        else
        {
            printf("Aluno reprovado.\nMedia final: %.1lf\n",g);
        }
    }
}

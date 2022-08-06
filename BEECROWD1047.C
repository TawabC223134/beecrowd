#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c>a && d>b)
    {
        e=c-a;
        f=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if(c==a && d==b)
    {
        e=24;
        f=0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if(c>a && d<b)
    {
        e=c-a-1;
        f=d-b+60;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if(c<a && d>b)
    {
        e=c-a+24;
        f=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if (c<a && d<b)
    {
        e=c-a+24-1;
        f=d-b+60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if(c==a && d>b)
    {   e=c-a;
        f=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if(c==a && d<b)
    {
        e=24-1;
        f=d-b+60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if(c>a && d==b)
    {
        e=c-a;
        f=0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    else if(c<a && d==b)
    {
        e=c-a+24;
        f=0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    return 0;
}

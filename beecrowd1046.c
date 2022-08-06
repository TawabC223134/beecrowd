#include<stdio.h>
 int main()
 {
     int a,b,c,d,e;
     scanf("%d%d",&a,&b);
     if(b>a)
     {
         c=b-a;
         printf("O JOGO DUROU %d HORA(S)\n",c);

     }
     else if(b==a)
     {
         d=24;
         printf("O JOGO DUROU %d HORA(S)\n",d);

     }
      else if(a>b)
     {
         e=b-a+24;
         printf("O JOGO DUROU %d HORA(S)\n",e);
     }
 }


#include<stdio.h>
int main()
{
    int a,yr,mnth,day;
    scanf("%d",&a);
    yr=a/365;
    a=a%365;
    mnth=a/30;
    a=a%30;
    day=a;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",yr,mnth,day);
    return 0;
}

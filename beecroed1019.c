#include<stdio.h>
int main()
{
    int a,hr,min,sec;
    scanf("%d",&a);
    hr=a/3600;
    a=a%3600;
    min=a/60;
    a=a%60;
    sec=a;
    printf("%d:%d:%d\n",hr,min,sec);
    return 0;
}

#include<stdio.h>
int main()
{
    int s,t,b,c,kb;
    scanf("%d%d%d",&s,&t,&b);
    c=(2*s*t*b*512)/1024;
    kb=(c/1024);
    printf("%d KB",c);
}
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    float x;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    x=sqrt(pow(c-a,2)+pow(d-b,2));
    printf("%0.4f",x);
}
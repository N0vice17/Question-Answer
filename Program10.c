#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,p,q,r;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&p,&q,&r);
    float y=((a*r)-(p*c))/((b*p)-(q*a));
    float x=(-c-(b*y))/a;
    printf("%f %f",x,y);
    return 0;
}
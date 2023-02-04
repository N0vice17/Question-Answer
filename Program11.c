#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float ans=acos((-1)*(float)((a*a)-(b*b)-(c*c))/(float)(2*b*c));
    printf("%f",ans*180/pi);
    return 0;
}
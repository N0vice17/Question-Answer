#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("%f",(float)(a*c+b*d+e)/(float)sqrt((c*c+d*d)));
    return 0;
}
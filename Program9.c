#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int g=-(a/2);
    int f=-(b/2);
    printf("%d %d\n",g,f);
    printf("%f",sqrt((g*g)+(f*f)-c));
    return 0;
}
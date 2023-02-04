#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d",(-1)*(a),(-1)*(b));
    printf("\n");
    printf("%f",sqrt((a*a)+(b*b)-c));
    return 0;
}
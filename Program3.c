#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s=(a+b+c)/2;
    printf("%f",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}
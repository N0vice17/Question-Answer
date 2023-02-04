#include<stdio.h>
#include<math.h>
int main(){
    int p,q,r,s,t,u;
    scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u);
    int a=sqrt((r-p)*(r-p)+(s-q)*(s-q));
    int b=sqrt((t-p)*(t-p)+(u-q)*(u-q));
    int c=sqrt((t-r)*(t-r)+(u-s)*(u-s));;
    float s1=(a+b+c)/2;
    printf("%f",sqrt(s1*(s1-a)*(s1-b)*(s1-c)));
    return 0;
}
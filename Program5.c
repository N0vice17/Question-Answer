#include<stdio.h>
int main(){
    int num1,num2,hcf;
    scanf("%d %d",&num1,&num2);
    int length=0;
    if(num1>=num2){
        length=num2;
    }
    else{
        length=num1;
    }
    for(int i=1;i<=length;i++){
        if(num1%i==0&&num2%i==0){
            hcf=i;
        }
    }
    printf("%d",(num1*num2)/hcf);
    return 0;
}
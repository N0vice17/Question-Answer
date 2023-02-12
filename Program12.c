#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if((i%10+(i/10)%10)%7==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
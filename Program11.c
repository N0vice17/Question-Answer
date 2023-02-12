#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%10>5&&i%10<8){
            printf("%d\n",i);
        }
    }
    return 0;
}
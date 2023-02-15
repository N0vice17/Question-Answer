#include<stdio.h>
int main(){
    for(int i=0;i<99;i++){
        if((i/10)%2!=(i%2)){
            printf("%d",i);
        }
    }
    return 0;
}
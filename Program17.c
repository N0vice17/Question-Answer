#include<stdio.h>
int main(){
    for(int i=10;i<=70;i++){
        for(int j=i;j<=i+19;j++){
            printf("%d\n",j);
        }
    }
    return 0;
}
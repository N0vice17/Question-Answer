#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<m;i++){
        sum1+=arr[i][i];
    }
    int num1=0;
    for(int i=n-1;i>=0;i--){
        sum2+=arr[i][num1];
        num1+=1;
    }
    printf("%d\n",sum1+sum2);
    return 0;
}
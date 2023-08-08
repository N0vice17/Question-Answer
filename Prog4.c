#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0){
                count+=1;
            }
        }
    }
    if(count>(m*n)/2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
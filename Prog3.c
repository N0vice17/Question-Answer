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
    int arr1[n][m];
    int ind=0;
    for(int i=m-1;i>=0;i--){
        int ind1=0;
        for(int j=0;j<n;j++){
            arr1[ind1][ind]=arr[i][j];
            ind1+=1;
        }
        ind+=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
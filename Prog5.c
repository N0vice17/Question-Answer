#include<stdio.h>
#include<stdlib.h>
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int recur(int i,int j,int pre,int m,int n,int start,int end,int arr[][n]){
    if(i==m||j==n){
        return 0;
    }
    if((i!=start||j!=end)&&(abs(pre-arr[i][j])!=1)){
        return -1;
    }
    int ans=0;
    ans=max(ans,recur(i+1,j,arr[i][j],m,n,start,end,arr)+1);
    ans=max(ans,recur(i,j+1,arr[i][j],m,n,start,end,arr)+1);
    return ans;
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int ans=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int temp=recur(i,j,arr[i][j],m,n,i,j,arr);
            if(temp>ans){
                ans=temp;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
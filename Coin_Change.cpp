#include <iostream>
using namespace std;
 
int coin_change(int n,int* d,int sizeD,int** dp){
 
if(n==0){
        return 1;
    }
 
    if(n<0){
        return 0;
    }
 
 
    if(sizeD==0){
        return 0;
 
    }
 
    if(dp[n][sizeD] > -1){
        return dp[n][sizeD];
    }
 
 
 
    int first = coin_change(n-d[0],d,sizeD,dp);
    int second = coin_change(n,d+1,sizeD-1,dp);
    dp[n][sizeD] = first + second;
    return first+second;
 
 
}
 
 
 
int main(){
int n=4;
int sizeD=3;
int d[]={1,2,5};
int** dp = new int*[n+1];
for(int i = 0; i <=n; ++i){
    dp[i] = new int[sizeD+1];
}
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=sizeD;j++)
    dp[i][j]=-1;
}
 
 
cout<<coin_change(n,d,sizeD,dp);
return 0 ;
}
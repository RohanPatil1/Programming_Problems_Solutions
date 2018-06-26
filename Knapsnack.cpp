#include<bits/stdc++.h>
using namespace std;


int knapsnackR(int* val,int* wt,int W,int n,int** dp){
 
 
 
    if(dp[n][W] > -1){
        return dp[n][W];
    }
 
    if(n==0 || W==0){
        return 0;
    }
 
 
 
    else if(wt[n-1] > W){
        return knapsnackR(val,wt,W,n-1,dp);
    }
    else{
        int option1 = knapsnackR(val,wt,W,n-1,dp);
        int option2 = val[n-1] + knapsnackR(val,wt,W-wt[n-1],n-1,dp);
       int  result = max(option2,option1);
        dp[n][W] = result;
    return dp[n][W];
 
    }
 
 
}







int knapsnack(int* val,int* wt,int W,int n){
	int** dp = new int*[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int[W+1];
	}

	for(int i=0;i<=W;i++){
		dp[0][i] = 0;
	}
	for(int i=0;i<=n;i++){
		dp[i][0] = 0;
	}

	for(int i=1;i<=n;i++){
		for(int w=0;w<=W;w++){

			dp[i][w] = dp[i-1][w];
			if(wt[i-1] <= w){
				dp[i][w] = max(dp[i][w],val[i-1] + dp[i-1][w-wt[i-1]]);
			}
		}
	}

	int ans = dp[n][W];
	//delete dp array 
	return ans;
}
int main(){
	
	int val[] = {5,4,8,6};
	int wt[] = {1,2,3,5};

	int W = 5;
	int n = 4;
int** dp = new int*[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int[W+1];
	}

	for(int i=0;i<=n;i++){
		dp[i][0] = 0;
	}
	for(int i=0;i<=W;i++){
		dp[0][i] = 0;
	}

	for(int i=1;i<=n;i++)
	{
    for(int j=1;j<=W;j++){
   	 dp[i][j]=-1;
   		 }
	}
	cout << knapsnack(val,wt,W,n)<<endl;
	cout << knapsnackR(val,wt,W,n,dp)<<endl;
}
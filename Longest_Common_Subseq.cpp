#include<iostream>
#include<cstring>
using namespace std;

//Iterative
int lcsI(char* s1,char* s2){
	int m=strlen(s1);
	int n =strlen(s2);
	int** dp = new int*[m+1];
	for(int i=0;i<=m;i++){
		dp[i] = new int[n+1];}
	for(int i=0;i<=m;i++){
		dp[i][0] = 0;
	}
	for(int i=0;i<=n;i++){
		dp[0][i] = 0;
	}

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(s1[m-i]==s2[n-j]){
				dp[i][j] = 1+dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}



int ans = dp[m][n];
//Deallocate the memory
for(int i=0;i<=m;i++){
	delete [] dp[i];
	}
	delete [] dp;

	return ans;


}


int lcsHelper(char* s1,char* s2,int m,int n,int** dp){

	//Size 0 or 0 of either of the two strings
	if(m==0||n==0){
		return 0;
	}

	if(dp[m][n]>-1){
		return dp[m][n];
	}

int ans;
	if(s1[0]==s2[0]){
		ans = 1 + lcsHelper(s1+1,s2+1,m-1,n-1,dp);
	}
	else{
		int option1 = lcsHelper(s1+1,s2,m-1,n,dp);
		int option2 = lcsHelper(s1,s2+1,m,n-1,dp);
		ans= max(option2,option1);

	}
	dp[m][n] = ans;
	return ans;
}

//Recursive
int lcs(char* s1,char* s2){
	int m=strlen(s1);
	int n=strlen(s2);
	// Initailise 2D Array as -1 for each element
	int** dp =new int*[m+1];
	for(int i =0;i<=m;i++){
		dp[i] = new int[n+1];
		for(int j=0;j<=n;j++){
			dp[i][j] = -1;
		}
	}
	int ans = lcsHelper(s1,s2,m,n,dp);
	//Deallocate the dp array memory
	
	for(int i=0;i<m;i++){
	delete [] dp[i];
	}
	delete [] dp;

	return ans;
}



int main(){
	char a[]="abc1gh";
	char b[]="abc22h";

	cout<<lcs(a,b)<<endl;
	cout<<lcsI(a,b)<<endl;


	return 0;

} 
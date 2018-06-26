#include<iostream>
#include<stack>
using namespace std;
bool check(int cows,int position[],int n,long long distance){

	int count = 1;
	long long last_position = position[0];
	for (int i = 1; i < n; i++)
	{
		if(position[i] - last_position >= distance){
			last_position=position[i];
			count++;
		}

		if(cows == count){
			return true;
		}
	}
	return false;

}



int main()
{
/*
	t : testcases
	n :  stall size
	position: stall
	c : number of cows
*/

	int t;
	cin>>t;
while(t--){
	int n;
	int c;
	cin>>n>>c;

	int position[n];
	for(int i=0;i<n;i++){
		cin>>position[i];
	}
	sort(position,position+1);
	long long start=0;
	long long end=position[n-1] - position[0];

	long long ans = -1;

	while(start<=end){
		long long mid= start + (end-start)/2 ; //Current Distance
		if(check(c,position,n ,mid)){
			ans = mid;
			start = mid+1;
		}
		else{
			end=mid-1;
		}


	}

	cout<<ans;






}//t ends




	return 0;
}
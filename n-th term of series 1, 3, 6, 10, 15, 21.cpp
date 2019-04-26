#include <iostream>
using namespace std;

/*
The first line of input contains a positive integer T denoting the number of testcases. 
For each test case, there will be a single line containing an integer N.
*/

int getNthTerm(int n){
    int* arr=new int[n];
    arr[0]=1;
    arr[1]=3;
    for(int i=2;i<(n+1);i++){
        arr[i] = arr[i-1] + m;
        m++;
    }
    
    return arr[n-1];
    
        
}



int main() {
	//code
	int t;
	cin>>t;
	int input;
	while(t--){
	    cin>>input;
	    int ans = getNthTerm(input);
	    cout<<ans<<endl;
	   }
	
	
	
	return 0;
}
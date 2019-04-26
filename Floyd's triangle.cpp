#include <iostream>
using namespace std;

/*
Given a number N. The task is to print Floyd's triangle with N lines.
Input:
2
4
5

Output:
1
2 3
4 5 6
7 8 9 10
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


*/

int main() {
	
	
	int t,i,j;
	cin>>t;
	int n;
	int m=1;
	while(t--){
	    cin>>n;
	    for(i=0;i<n;i++){
	        for(j=0;j<=i;j++){
	            cout<<m<<" ";
	            m++;
	        }
	        cout<<endl;
	    }
	    
	    m=1;
	    
	   }
	
	return 0;
}
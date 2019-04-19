#include <iostream>
using namespace std;


/*
You are given a cubic dice with 6 faces. All the individual faces have a number printed on them. The numbers are in the range of 1 to 6, 
like any ordinary dice. You will be provided with a face of this cube, your task is to guess the number on the opposite face of the cube.
*/


int getOppSide(int input){
    
    int arr[]= {6,5,4,3,2,1};
    return arr[input-1];
    
    
}

int main() {
	
	int t;
	int input;
	cin>>t;
	while(t--){
	    cin>>input;
	    int ans = getOppSide(input);
	    cout<<ans<<endl;
	    }
	
	return 0;
}
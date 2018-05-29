/*
----Longest Increasing Subsequence----
Given an array and it's corresponding size,write a code which returns the length of the longest increasing subsequence 
possible for the given array.


*/
#include<iostream>
#include<algorithm>
using namespace std;

int lis(int* input,int size){
	int* output = new int[size+1];
	output[0]=1;
	for(int i=1;i<size;i++){
		output[i]=1;
		for(int j=i-1;j>=0;j--){
			if(input[i] < input[j]){
				continue;
			}
			int possibleAns = 1 + output[j] ;
			if(possibleAns > output[i]){
				output[i]=possibleAns;
			}
		}


	}
	int result = *std::max_element(output,output+size);
	return result;

}



int main(){

	int size=0;
	cin>>size;
	int* input = new int[size];
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	int result = lis(input,size);
	cout<<result;

	return 0;

}

/*
----ALPHA CODE----
Alice and Bob need to send secret messages to each other and are discussing ways to encode their messages:
Alice: “Let’s just use a very simple code: We’ll assign ‘A’ the code word 1, ‘B’ will be 2, and so on down to ‘Z’ being assigned 26.”

Bob: “That’s a stupid code, Alice. Suppose I send you the word ‘BEAN’ encoded as 25114. You could decode that in many different ways!”

Alice: “Sure you could, but what words would you get? Other than ‘BEAN’, you’d get ‘BEAAD’, ‘YAAD’, ‘YAN’, ‘YKD’ and ‘BEKD’. I think you would be able to figure out the correct decoding. And why would you send me the word ‘BEAN’ anyway?”

Bob: “OK, maybe that’s a bad example, but I bet you that if you got a string of length 5000 there would be tons of different decodings and with that many you would find at least two different ones that would make sense.”

Alice: “How many different decodings?”

Bob: “Jillions!”
For some reason, Alice is still unconvinced by Bob’s argument, so she requires a program that will determine how many decodings there can be for a given string using her code.

*/
#include<iostream>
using namespace std;

int alpha_code_iterative(int* input,int size){
	int* output = new int[size+1];
	output[0]=1;
	output[1]=1;

	for(int i=2;i<=size;i++){
		output[i] = output[i-1];
		if(input[i-2]*10 + input[i-1] <= 26){
			output[i] += output[i-2];
		}

	}
	int ans = output[size];
	delete [] output;
	return ans;


}





int alpha_code_helper(int* input,int size,int* arr){
	if(size==0){
		return 1;
	}
	if(size==1){
		return 1;
	}
	if(arr[size]>0){
		return arr[size];
	}

	int output = alpha_code_helper(input,size-1,arr);
	if(input[size-2]*10 + input[size-1] <= 26){
		output += alpha_code_helper(input,size-2,arr) ;
	}
	arr[size] = output;
	return output;

}

int alpha_code(int* input,int size){

	int* arr = new int[size+1];
	int result = alpha_code_helper(input,size,arr);
	return result;

}



int main(){

	int size=0;
	cin>>size;
	int* input = new int[size];
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	int result1 = alpha_code(input,size);
	
	int result2 = alpha_code_iteratibe(input,size);

	cout<<result1<<endl;
	cout<<result2<<endl;

	return 0;

}

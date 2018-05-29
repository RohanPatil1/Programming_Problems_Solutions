/*
----Maximum SubArray Sum----
Given an array and it's corresponding size,write code for the maximum possible sum for the subarray of the given array.
*/
#include <iostream>
using namespace std;



int max_subarray_sum(int* input,int size){

	int best_score=0;
	int curr_score=0;
	for(int i=0;i<size;i++){
		curr_score += input[i];

		if(curr_score < 0){
			curr_score = 0;
		}
		if(best_score < curr_score){
			best_score = curr_score;
		}


	}
return best_score;

}


int main()
{

	int input[] = {2,3,1,3,4,5,1,-1,41};
	int size = 9;
	int result = max_subarray_sum(input,size);
	cout<<result<<endl;
	return 0;
}
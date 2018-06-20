#include <iostream>

using namespace std;

/*

Let A[0 ... n-1] be an array of n distinct positive integers. If i < j and A[i] > A[j] then the pair (i, j) 
is called an inversion of A (where i and j are indexes of A). 
Given an integer array A, your task is to find the number of inversions in A.


*/

long long merge(int A[],int left,int mid,int right){
	int i=left;
	int j=mid;
	int k=0;
	long long count = 0;
	int temp[right-left+1];

	while(i<mid && j<=right){
		if(A[i] <= A[j]){
			temp[k++] = A[i++];

		}
		else{
			temp[k++] = A[j++];
			count += mid-i;
		}

	}

	while(i<mid){
		temp[k++] = A[i++];
	}

	while(j<=right){
		temp[k++] = A[j++];
	
	}


	for(int i=left,k=0;i<=right;i++,k++){
		A[i] = temp[k];
	}
	return count;


}


long long merge_sort(int A[],int left,int right){

	long long count =0;
	if(right > left){
	    	long long mid = (left + right)/2;
		long long countLeft = merge_sort(A,left,mid);
		long long countRight = merge_sort(A,mid+1,right);
		long long myCount = merge(A,left,mid+1,right);
		cout<<"Count Left: "<<countLeft<<"  "<<endl;
		cout<<"Count Right: "<<countRight<<"  "<<endl;
		cout<<"Count My : "<<myCount<<"  "<<endl;
		return (countLeft + countRight + myCount);		
	}

	return count;
}



long long  inversion_count(int A[],int size){

	long long ans = merge_sort(A,0,size-1);
	return ans;


}



int main(){
	int A[] = {5,4,2,3,1};
	cout << inversion_count(A,5);

}



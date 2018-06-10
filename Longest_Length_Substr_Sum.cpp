/*

Given a string ‘str’ of digits, find length of the longest substring of ‘str’, such that the length of the substring is 2k digits and 
sum of left k digits is equal to the sum of right k digits.

*/
#include<stdio.h>
#include<string.h>
#include <iostream>

using namespace std;

int maxStringLen(char str[]){
    int maxlen=0;
    int n=strlen(str);
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j+=2){
            int length = j-i+1;
            int leftsum=0;
            int rightsum=0;
            for(int k=0;k<length/2;k++){
                leftsum += (str[i+k] -'0');
                rightsum += (str[i+k+length/2] - '0');
                
            }
            if(leftsum==rightsum && maxlen < length){
                maxlen = length;
            }
            
            
        }
        
        
    }
    
    
    return maxlen;
}


int main() {
    char str[]="1538042";
    int result= maxStringLen(str);
	cout<<result;
	
	return 0;
}

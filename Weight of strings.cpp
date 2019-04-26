#include <iostream>
#include<string>
using namespace std;

/*
You are given two strings S1 and S2. You need to find weights of both strings and compare them. The weight of a string can be obtained by 
adding individual weights of the characters that make the string. The weight of individual characters are the position on which they occur 
in the english alphabets table; for eg, a has weight 1, z has weight 26.
*/


int calculateWeight(string str){
    int weight=0;
    for(char s:str){
        weight  += ((int)s - 97)+1;    
    }
    
    return weight;
    
}


int main() {
	
	int t;
	cin>>t;
	string str1,str2;
	int w1,w2;
	while(t--){
            cin>>str1;
            cin>>str2;
            w1 = calculateWeight(str1);
            w2 = calculateWeight(str2);
            if(w1 > w2){
                cout<<"1"<<endl;
            }else if(w1 < w2){
                cout<<"2"<<endl;
            }
            else{
                cout<<"equal"<<endl;
            }
            
	   }
	
	
	return 0;
}
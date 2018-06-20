#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int minDelAnagram(string str1,string str2){
    int count = 0;
    for(int i=0;i<str1.length();i++){
     for(int j=0;j<str2.length();j++){
        if(str1[i] == str2[j]){
                  count++;      
        }
        else{}

        
           
      }
        
    }
    int maxLen =str2.length() + str1.length();
    

    
    
    cout<<"Count : "<<count<<endl;
    cout<<"MaxLen : "<<maxLen<<endl;
    return (maxLen - count*2);
    
    
    
}




int main() {

    string str1 = "fcrxzwscanmligyxyvym";
    string str2="jxwtrhvujlmrpdoqbisbwhmgpmeoke";
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    int result = minDelAnagram(str1,str2);
    cout<<result<<endl;
    
    return 0;
}

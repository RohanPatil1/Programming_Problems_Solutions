#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the  function below.
vector<int> rotLeft(vector<int> a, int d) {
    int size = a.size();
    queue<int> myqueue;
    queue<int> output;
    vector<int> ans;
    for(int i=0;i<size;i++){
        myqueue.push(a[i]);
    }
    
    
    
    

    for(int i=0;i<d;i++){
        output.push(a[i]);  
    }
         for(int i=0;i<d;i++){
        myqueue.pop();  
    }
       while (!output.empty()){
           myqueue.push(output.front());
           output.pop();

       }  
    
     while (!myqueue.empty()){
           ans.push_back(myqueue.front());
           myqueue.pop();

       }  
    
    return ans;

}
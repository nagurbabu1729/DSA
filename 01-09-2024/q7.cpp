#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
   int n = 10, m = 7;
   
   int arr1[] = {1,2,3,4,5,6,7,8,9,10};
   int arr2[] = {2,3,4,4,5,11,12};
    
    set<int>s;
    
    vector<int>union;
    
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
        
    for(auto&it:s){
        Union.push_back(it);
    }
        
    for(auto&val:union)
        cout << val << " ";
    
    return 0;
}
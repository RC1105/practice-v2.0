#include "bits/stdc++.h"
using namespace std;
int ans=1;

void rec(vector<int> arr){
    if(arr.size()==1){
        ans=arr[0];
        return;
    }
    for(int i=0; i<arr.size();i++){
        if(i%2!=0){
            
            arr1.erase(arr.begin()+i);
        }
    }
    reverse(arr.begin(),arr.end());
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rec(arr1);
}

int main(){
    int n=9;
    vector<int> vec;
    for(int i=1; i<=n;i++){
        vec.push_back(i);
    }
    for(int i=0; i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    rec(vec);
    return  0;
    
}
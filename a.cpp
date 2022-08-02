#include "bits/stdc++.h"
using namespace std;
void hashing(vector<int> arr, int k) {
    vector<int> vec;
    map<int,int> mp1;
    for(int i=0; i<arr.size();i++){
        mp1[arr[i]]++;
    }
    for(auto itr=mp1.begin(); itr!=mp1.end(); itr++){
        cout<<itr->first<<": "<<itr->second<<endl;
        if(itr->second==k){
            vec.push_back(itr->first);
        }
    }
    cout<<endl<<"With frequency "<<k<<": "; 
    for(int i=0; i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}

int main(){
    vector<int> arr{203,204 ,205, 206, 207, 208, 203, 204, 205, 206,203};
    hashing(arr,2);
}
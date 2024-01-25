// remove duplicate from sorted array

#include<bits/stdc++.h>
using namespace std;

vector<int> removeDup(vector<int>arr){
    vector<int>v;
    int temp=arr[0];
    v.push_back(temp);
    for(int i=1; i<arr.size(); i++){
        if(temp!=arr[i]){
            temp=arr[i];
            v.push_back(temp);
        }
    }
    return v;
}

int main(){
    int n;
    cout<<"I/P:\n";
    cout<<"Enter size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array elements:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>v=removeDup(arr);
    
    // display output
    cout<<"O/P:\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
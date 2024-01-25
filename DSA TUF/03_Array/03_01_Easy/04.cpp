// Left rotate by one place

#include<bits/stdc++.h>
using namespace std;

void LRO(vector<int>&arr){
    int temp=arr[0];
    for(int i=0; i<arr.size()-1; i++){
        arr[i]=arr[i+1];
    }
    arr[arr.size()-1]=temp;   
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
    LRO(arr);
    
    // display output
    cout<<"O/P:\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
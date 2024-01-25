// Largest element in an array

#include<bits/stdc++.h>
using namespace std;

int LargestElement(vector<int>arr){
    int maxi=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(maxi<arr[i]) maxi=arr[i];
    }
    return maxi;
}

int main(){
    int n;
    out<<"I/P:\n";
    cout<<"Enter size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array elements:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // display output
    out<<"I/P:\n";
    cout<<"Largest element: "<<LargestElement(arr);
    
    return 0;
}
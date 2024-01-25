// 2nd Largest element in an array

#include<bits/stdc++.h>
using namespace std;

int LargestElement(vector<int>arr){
    int maxi=arr[0];
    int maxi2=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(maxi<arr[i]){
            maxi2=maxi;
            maxi=arr[i];
        }
        else if(maxi2<arr[i]){
            maxi2=arr[i];
        }
    }
    return maxi2;
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
    // display output
    cout<<"O/P:\n";
    cout<<"2nd Largest element: "<<LargestElement(arr);
    
    return 0;
}
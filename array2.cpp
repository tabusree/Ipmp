#include<bits/stdc++.h>
using namespace std;

int getOddoccurence(int arr[], int arr_size){
    int result = 0;
    for(int i = 0; i < arr_size; i++){
        result = result ^ arr[i]; 
    } 
    return result;
}

int main(){
    int arr[] = {4,3,3,2,3,1,3,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<getOddoccurence(arr, n);
    return 0;
}

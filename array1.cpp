//Find Union and Intersec5on of two sorted arrays
#include<bits/stdc++.h>
using namespace std;

void printUnion(int arr1[], int arr2[] , int m, int n){
    int i = 0,j = 0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr2[j<arr1[i]]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<"";
            i++;
            j++;
        }
    }
    while(i<m)
    cout<<arr1[i++]<<" ";
    
    while(j<n)
    cout<<arr2[j++]<<" ";
}

int main(){
    int arr1[] = {1,3,4,6,8,0,6};
    int arr2[] = {6,4,5,2,7,8,1,9,10};
    
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    printUnion(arr1,arr2,m,n);
    return 0;
}

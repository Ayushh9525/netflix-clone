#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i=0; i<=n-2; i++){
         int minimum = i;
        for(int j=i; j<=n-1; j++) {
            if(arr[minimum]>arr[j]){
            minimum =j;
            }
            int temp;
            temp = arr[minimum];
            arr[minimum] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int n;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++) {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0; i<n;i++) {
        cout<<""Sorted array"<<arr[i]<<" ";
    }
}
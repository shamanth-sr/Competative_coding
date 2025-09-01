// C++ program to swap alternate elements of an array

#include<iostream>
using namespace std;

void swap_alt(int arr[], int n){
    for(int i=0; i<n-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
}   

void printing(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int a[5] = {1,2,3,4,5};
    int b[6] = {6,7,8,9,10,2};

    swap_alt(a, 5);
    printing(a, 5);
    
    swap_alt(b, 6);
    printing(b, 6);
}
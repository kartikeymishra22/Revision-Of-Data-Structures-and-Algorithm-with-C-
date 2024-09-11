#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternates(int arr[], int n){
    for(int i = 0; i<n; i = i +2){
        if((i) + 1 < n){
            swap(arr[i], arr[i +1]);
        }
    }
    print(arr, n);
}

int main(){
    int arr[5] = {1,2,7,8,5};

    swapAlternates(arr, 5);

}
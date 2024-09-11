#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n- 1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    print(arr, n);
}

int main()
{
    int arr[8] = {2,4,6,8,10,12,14,12};

    reverseArray(arr, 8);
}
#include<iostream>
using namespace std;

int main(){
   const int size = 3;
   int arr[size];
   int value = 4;

   for(int i = 0; i<size; i++){
       arr[i] = value;
   }

   for(int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}
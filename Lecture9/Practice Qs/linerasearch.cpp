#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i =0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return -1;
}

int main()
{
    int arr[8] = {2,4,6,8,10,12,14,12};

    cout<<linearSearch(arr,8,10)<<endl;

}
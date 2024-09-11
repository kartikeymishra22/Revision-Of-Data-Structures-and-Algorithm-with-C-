#include<iostream>
using namespace std;

int uniqueElements(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[2] = {1,2};

    cout<<uniqueElements(arr, 2)<<endl;

}
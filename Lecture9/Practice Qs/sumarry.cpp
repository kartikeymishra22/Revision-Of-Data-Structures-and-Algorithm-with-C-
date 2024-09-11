#include<iostream>
using namespace std;

void  sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<endl;
    cout<<sum<<endl;
}

int main()
{
    int arr[5] = {6,8,9,10,-11};

    sum(arr, 5);

}
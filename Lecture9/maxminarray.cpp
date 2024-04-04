#include<iostream>
#include <climits>
using namespace std;

int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[10] = {12, 13, 15, 16, 88, 99, 98, 33, 11, 49};


    cout<<"MINIMUM is "<<getMin(arr, 10)<<endl;

    cout<<"MAXIMUM is "<<getMax(arr, 10)<<endl;

    return 0;
}
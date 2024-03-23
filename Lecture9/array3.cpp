#include<iostream>
using namespace std;
void update(int arr[], int n)
    {
        for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main ()
{
    int arr[4]= {1,2,3,4};

    update(arr, 4);

    for(int i = 0; i<4; i++)
    {
        cout<<arr[i]<<" ";
    }

}
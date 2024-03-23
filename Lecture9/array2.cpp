#include<iostream>
using namespace std;
void print(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int third[15] ={2,7};

    print(third, 15); 
}
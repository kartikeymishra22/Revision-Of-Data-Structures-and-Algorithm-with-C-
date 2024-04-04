#include<iostream>
using namespace std;
int getMin(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i]<arr[i+1]){
            arr[i]++;
            arr[i+1]++;
        }
        return arr[i];
    }
}
int main()
{
    int arr[4] = {2, 3, 1, 4};

    int ans = getMin(arr, 4);

    cout<<"Minimum is "<<ans<<endl;

}

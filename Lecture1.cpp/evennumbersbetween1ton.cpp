#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 2;
    while(sum<=n)
    {
        cout<<sum<<" ";
        cout<<endl;
        sum +=2;
    }
    return 0;
}

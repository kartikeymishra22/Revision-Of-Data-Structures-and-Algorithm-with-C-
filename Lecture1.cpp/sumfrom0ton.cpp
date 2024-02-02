#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int num = 0;
    int sum = 0;
    while(num<=n)
    {
        sum = num + sum ;
        num++;
    }
    cout<<sum<<endl;
    return 0;
}

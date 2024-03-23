#include<iostream>
using namespace std;
int fib(int n)
{
    int a = 0;
    int b = 1;
    int ans = 0;
    for(int i = 1; i<n; i++)
    {
        ans = a+b;
        b = a;
        a = ans;
    }
    return ans;
}
int main ()
{
    int n;
    cin>>n;

    cout<<fib(n)<<endl;

    return 0;
}
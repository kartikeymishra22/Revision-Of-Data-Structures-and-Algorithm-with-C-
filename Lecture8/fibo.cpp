#include<iostream>
using namespace std;
void fib(int n)
{
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<=n; i++)
    {
        int ans = a+b;
        cout<<ans<<" ";
        a = b;
        b = ans;
    }
}
int main ()
{
    int n;
    cin>>n;

    fib(n);

    return 0;
}
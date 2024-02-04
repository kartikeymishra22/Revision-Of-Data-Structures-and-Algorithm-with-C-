#include<iostream>
using namespace std;
bool isEven(int a)
{
    int i = 2;
    if(a%i == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;

    if(isEven(n)){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
#include<iostream>
using namespace std;
int main ()
{
    int principal;
    cout<<"Enter the value of Principal: "<<endl;
    cin>>principal;
    double rate;
    cout<<"ENter the value of Rate: "<<endl;
    cin>>rate;
    double time;
    cout<<"Enter the Time: "<<endl;
    cin>>time;

    double SI = principal * rate * time / 100;

    cout<<"Simple Interset is: "<<SI<<endl;
    
}
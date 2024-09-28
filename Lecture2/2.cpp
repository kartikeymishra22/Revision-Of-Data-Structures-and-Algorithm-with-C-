#include<iostream>
using namespace std;

int main(){
    float pen, pencil, eraser;
    cin>>pen>>pencil>>eraser;

    float total = (pen + pencil + eraser);

    float tax = (total * 0.18);
    float bill = total + tax;
    cout<<bill<<endl;

    return 0;
}
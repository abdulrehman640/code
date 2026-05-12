#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    
    
    cout<<"Enter the temperature in celsius :"<<endl;
    cin>>a;
    b = a + 273.15;
    cout<<"Temperature in kelvin:"<<b<<endl;
    c = (a * (9/5) ) + 32;
    cout<<"Temperature in fahrenheit: "<<c<<endl;  //good
    return 0;
}
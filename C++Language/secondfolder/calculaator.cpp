#include<iostream>
using namespace std;
int main ()
{
    cout<<"-----------------------------\n Welcome to the Calculator \n-----------------------------\n";
    char x ;
    float a,b,sum,difference,division,multiplication;
    cout<<"Enter the first number :"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    cout << "chose one option ( +,-,/,*)"<<endl;
    cin>>x;
    if(x == '+')
    {
        int sum = a + b;
        cout<<"The sum is :"<<a + b<<endl;
    }
    else if( x == '-')
    {
        cout<<"The difference  is : "<<a - b<<endl;
    }
    else if ( x == '/')
    {
        cout<<"The quotient is :"<< a / b<<endl;
    }
    else if( x == '*')
    {
        cout<<"The product  is :"<<a * b<<endl;
    }else{
        cout <<"YOU CHOSE WRONG OPTION";
    }
    return 0;
}
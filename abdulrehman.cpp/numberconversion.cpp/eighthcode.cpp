#include<iostream>
using namespace std;
int main()
{
    float a,b,c;

    cout << " Enter the first number :"   <<endl;

    cin >> a;

    cout << " Enter the second number :"  <<endl;

    cin >> b;

    cout << " Enter the third number :"   <<endl;

    cin >> c;
    
    if (a >= b && a >= c)
    {
        cout << " Maximum is :"<<a        <<endl;
    }
    else if (b >= a && b>=c )
    {
        cout << " Maximum is :"<<b        <<endl;
    }
    else
    {
        cout << " Maximum is :"<<c        <<endl;
    }
    return 0;
}
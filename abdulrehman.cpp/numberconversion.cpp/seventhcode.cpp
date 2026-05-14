//check that a number is even or odd
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout << " Enter the number :"     << endl;
    cin >> i;
    if ( i % 2 == 0)
    {
        cout << " The number is even" <<endl;
    }
    else 
    {
        cout << " The number is odd"  <<endl;
    }
    return 0;
}
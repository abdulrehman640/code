#include<iostream>
using namespace std;
int main()
{
    int n,reverse = 0 , reminder = 0 ;
    cout << " Enter the number : ";
    cin >> n;
    if( n < 0)
    n = -n ;
     int orignal = n;
    while( n != 0)
    {
        reminder = n % 10;
        reverse = reverse * 10 + reminder ;
        n = n / 10 ;
    }
    cout << " Reverse Number is : " << reverse         << endl;
    switch ( orignal == reverse)
    {   
        case 1 :
            cout << reverse << " is a palindrome. "     << endl ;
            break;
        case 0 :
            cout << reverse << " is not a palindrome. " <<endl;
    }
    return 0;
}
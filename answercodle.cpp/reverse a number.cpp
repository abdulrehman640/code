#include<iostream>
using namespace std;
int main()
{
    int n , reverse = 0 , reminder = 0 ;

    cout << " Enter the number : " ;

    cin >> n ;

    if ( n < 0)
        n = - n ;

    while( n != 0)
    {
        reminder = n % 10 ;
        reverse = reverse * 10 + reminder ;
        n = n / 10 ;
    }
    cout << " Reverse number is : " << reverse << endl ;

    return 0;
}
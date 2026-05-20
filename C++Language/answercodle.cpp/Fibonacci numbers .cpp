#include<iostream>
using namespace std;
int main()
{
    int n , second = 1 , first = 0 , next  ;

    cout << " How many Fibonacci numbers you want : " ;

    cin >> n ;

     cout << " Fibonacci numbers are : " ;

    for( int i = 1 ; i <= n ; i++ )
    {
        if  ( i == 1 )
        {
            cout << first  << " " ;
        }
        if ( i == 2 )
        {
            cout << second << " " ;
        }
        next = first + second ;

        first = second ;

        second = next ;

        cout << next << " " ;
    }
    return 0;
}
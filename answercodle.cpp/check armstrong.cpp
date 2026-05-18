#include<iostream>
using namespace std;
int main()
{
    int n , orignal , sum = 0 , reminder = 0;
    cout << " Enter the number : ";
    cin >> n;
    if ( n < 0 )
    {  
        n  = -n ;
    }
    orignal = n ;
    while (n != 0)
    {
        reminder = n % 10 ;
        sum = sum + ( reminder * reminder * reminder ) ;
        n = n / 10 ;
    }
    switch(orignal == sum )
    { 
        case 1 :
            cout << orignal << " is  sum of cubes. "    << endl ;
            break ;
        case 0 : 
            cout << orignal << " is not sum of cubes. " << endl ;
            break;
    }
    return 0;
}
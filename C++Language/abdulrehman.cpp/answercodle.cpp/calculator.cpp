#include<iostream>
using namespace std;
int main()
{
    double a , b , result ;

    int choice ;
    cout << " Enter the first number : "                                             << endl ;

    cin >> a ;

    cout << " Enter the second number : "                                            << endl ;

    cin >> b ;

    cout << " \n==========CALCULATOR========== "                                     << endl ;

    cout << " 1. Addition (+) "                                                      << endl ;

    cout << " 2. Substraction (-) "                                                  << endl ;

    cout << " 3. Division (/) "                                                       << endl ;

    cout << " 4. Multiplication (x) "                                                 <<endl ;

    cout << " 5. Modulas (%) "                                                        <<endl ;

    cout <<"=============================="                                           << endl;

    cout << " Enter your choice ( 1 - 5) "                                            << endl ;

    cin >> choice ;

    switch ( choice )
    {
        case 1 : 

            cout << a << " + " << b << " = " << a + b                                   << endl ;

            break ;

        case 2 :

            cout << a << " - " << b << " = " << a - b                                            << endl ;

            break ;

        case 3 :

            if ( b == 0 )
            {
                cout << " ERROR! can't divide by zero "                                 << endl ;
            }

            else
            {
                cout << a << " / " << b << " = " << ( int ) a /  ( int ) b                 << endl ;            
            }

            break ;

        case 4 :

            cout << a << " x " << b << " = "  << a * b                                            << endl ;

            break ;

        case 5 :

            if ( b == 0 )
            {
                cout << " ERROR! can't divide by zero "                                  << endl ;
            }

            else 
            {
                cout << a << " % " << b << " = " << ( int ) a % ( int ) b                        << endl ;
            }

            break ;

        default :

            cout << " You entered invalid choice . Please enter 1 to 5 "                 << endl ;

            break ;
    }
    return 0 ;
}
#include<iostream>
using namespace std;
int main()
{
    int n , flag = 1;
    cout << " Enter the number  : " ;
    cin >> n ;
    if ( flag < 0 )
    {
        flag = 0 ;
    }
    for(int i = 2 ; i < n ; i++ )
    {
        if(n % i == 0)
        {
                flag = 0 ;
                break;
        }
    }
    switch(flag)
    {
        case 1:
            cout << n << " is a prime number ";
            break;
        case 0:
            cout << n << " is not a prime number ";
            break;
    }
    return 0 ;
}
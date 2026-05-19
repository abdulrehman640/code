//counting of number of digits in an integer
#include<iostream>
using namespace std;
int main()
{
    int n;

    cout << " Enter the number : " ;

    cin >> n ;

    string s = to_string( n );

    cout << " Number of digits : " << s.length() << endl;

    return 0;
}

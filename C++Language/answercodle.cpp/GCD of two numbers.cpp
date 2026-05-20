#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the first number : " ;
    cin >> a;
    cout << " Enter the second numer : " ;
    cin >> b;
    int x = a, y = b;
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    int lcm = (x * y ) / gcd;
    cout << " GCD of "<< x <<" and "<< y <<" is: "<< gcd << "."<<endl;
    cout << " LCM of " << x << " and " << y << " is: " <<lcm<<"."<<endl; 

    return 0;
}
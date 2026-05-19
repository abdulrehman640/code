#include<iostream>
using namespace std;
bool isPrime(int num)
{
    if( num < 0) return false;
    for(int i = 2 ; i * i <= num ; i++ )
    {
        if( num % i == 0) return false;
    } 
    return true;
}
int main()
{
    int n;
    cout << " Enter  n: ";
    cin >> n;
    cout << " The prime numbers between o to " << n << " are: ";
    for ( int i = 2 ; i <= n; i++)
    {
    
        if(isPrime(i))
         cout << i << " ";
    }
    cout<<endl;

    return 0;

}
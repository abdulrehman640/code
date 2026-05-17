//factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int i,n,product = 1;
    cout << " Enter the number : "        << endl;
    cin >> n;
    for (i = 1 ; i <= n ; i ++)
    {
        product = product * i;
    }
    cout << " factorial is : " << product << endl;
    return 0;
}
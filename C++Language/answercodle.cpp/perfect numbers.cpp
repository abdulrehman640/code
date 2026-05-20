#include<iostream>
using namespace std;
int main()
{
    int n,orignal,a = 0 ;
    cout<<"Enter the number : ";
    cin>>n;
    orignal = n;
    for(int i = 1 ; i < n ; i++)
    {
        if(n % i == 0)
        a += i;
    }
    if(a == orignal)
    {
        cout<< n << " is a PERFECT NUMBER ";
    }
    else
    {
        cout << n << " is NOT a PERFECT NUMBER ";
    }
    return 0;
}
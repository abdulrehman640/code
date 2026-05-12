#include<iostream>
using namespace std;
int main()
{
    int x = 8;
    for(int i = 1; i <= 10; i++)
    {
        cout << x << " x " <<i<< " = " << x * i << endl;
    }
    int z = 9;
    int i = 1; 
    do 
    {
        cout<<z<<" x "<<i<<" = "<<z*i<<endl;
         i += 1;
    }
    while( i != 10);
    
    return 0;
}

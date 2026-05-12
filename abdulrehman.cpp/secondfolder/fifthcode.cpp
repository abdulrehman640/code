#include<iostream>
using namespace std;
int main( )
{
    int n;
    cout<<"Enter the number of rows :";

    cin>>n;

    for(int i = 0; i <= n - 1 ; i++ )
    {

        for(int space = n - i + 1; space >= 0 ; space--)
        {
            cout<<" ";
        }

        for(int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}

/*
0,1
1,2
2,3
3,4
4,5
5,6
6,7
7,8
8,9
9,10

*/
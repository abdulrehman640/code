#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of square";
    cin>>size;
    int i = 1 ; 
    while(i <= size)
    {
        int j = 1;
        while(j <= size)
        {
            if( i ==size || i == 1 || j == 1 ||j == size)
            {
                cout<<"*";
            } 
            else
            {
                cout<<" ";
            }
            if(j < size)
            {
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
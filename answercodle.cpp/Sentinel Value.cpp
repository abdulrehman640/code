#include<iostream>
using namespace std;
int main()
{
    int w[5] = {1, 2, 3, 4, 5 };
    int target;
    cout<<"Enter the number you want to find out: ";
    cin >> target;
    int f = -1;
    for( int i = 0; i < 5; i++)
    {
        if(w[i] == target )
        {
            f = i;
            break;
        }
    }
    if(f != -1 )
    {
        cout<<"Number "<<target<<" found at index number "<<f << ".";
    }
    else
    {
        cout<<"Number "<<target<<" does not found in this array. ";
    }

    return 0;
}
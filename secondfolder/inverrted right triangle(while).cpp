#include<iostream>
using namespace std;
int main()
{
     int n ;
     cout << "Enter number of rows: ";
    cin >> n;
   
    int i = 1;

    while(i <= n)   
    {
        int space = n - i;

        // Print spaces
        while(space > 0)
        {
            cout << " ";
            space--;
        }

        int j = 1;

        // Print stars
        while(j <= i)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }


    return 0;
}
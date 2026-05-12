#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout << "Enter square size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Size must be positive." << endl;
        return 0;
    }

    for (int i = 1; i <= size; i++) 
    {
        for (int j = 1; j <= size; j++) 
        {
            if (i == 1 || i == size || j == 1 || j == size) 
            {
                cout << "*";
            } 
            else 
            {
                cout << " ";
            }
            if (j < size) cout << " ";
        }
        cout << endl;
    }

    return 0;
}

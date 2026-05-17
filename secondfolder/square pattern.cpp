#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int cols = 5;

    int x ,i = 1;
    cout << "Size of the square : ";
    cin>>x;
    rows = x;
    cols = x;

    while (i <= rows) {
        int j = 1;

        while (j <= cols) {

            // Print * on borders
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            }
            else {
                cout << " ";
            }

            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
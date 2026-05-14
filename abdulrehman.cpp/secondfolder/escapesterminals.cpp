#include <iostream>
using namespace std;

int main() {

    cout << "***** ESCAPE SEQUENCES *****\n" << endl;

    cout << "1.  New Line      : Hello\nWorld"           << endl;
    cout << "2.  Tab           : Name\tAli"              << endl;
    cout << "3.  Backslash     : C:\\Users\\Ali"         << endl;
    cout << "4.  Double Quote  : \"Hello!\""             << endl;
    cout << "5.  Single Quote  : " << '\''               << endl;
    cout << "6.  Carriage Ret  : Hello\rWorld"           << endl;
    cout << "7.  Backspace     : Helloo\b!"              << endl;
    cout << "8.  Beep          : \aBeep!"                << endl;
    cout << "9.  Vertical Tab  : Hello\vWorld"           << endl;
    cout << "10. Form Feed     : Page1\fPage2"           << endl;
    cout << "11. Null Char     : " << "Hi\0There"        << endl;
    cout << "12. Hex           : \x41\x42\x43"           << endl;
    cout << "13. Octal         : \101\102\103"           << endl;

    cout << "\n***** END *****" << endl;

    return 0;
}


/*
0,0,0,0
1,1,1,1
2,10,2
3,11,
4,4
5,,5,5
6,,6,6
7,,7,7
8,,,8
9,,,9
10,A
11,B
12,C
13,D
14,E
15,F
*/
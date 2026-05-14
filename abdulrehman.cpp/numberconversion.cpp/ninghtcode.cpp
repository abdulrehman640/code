#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << " Enter the alphabet :"                                           <<endl;
    cin >> ch;
    ch = towlower(ch)  ;

    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
        cout << " The alphabet is vowel"                                      <<endl;
    }
    else 
    {
        cout << " The alphabet is consonant "                                 <<endl;        
    }
    return 0;
}
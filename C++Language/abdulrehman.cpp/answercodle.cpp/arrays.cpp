#include<iostream>
using namespace std;
int main()
{
    //          0  1  2  3  4
    int s[5] = {1 ,2 ,3 ,4 ,5} ;
    //s[5] = {1, 2, 3, 4, 5};
    s[2] = 2;
    cout<<s[2];
    for (int i = 0; i <= 4;i++ ){
        cout<<s[i]<<", ";
    }
    int n;
    cin>>n;
    int p[n] = {1 ,2 ,3 ,4 ,5} ;
    //s[5] = {1, 2, 3, 4, 5};
    p[2] = 2;
    cout<<s[2];
    for (int i = 0; i < n ;i++ ){
        cout << "Enter the " << i + 1 << "th index value: ";
        cin>>p[i];
    }
        for (int i = 0; i < n ;i++ ){
        cout<<p[i]<<", ";
    }
    return 0;
}
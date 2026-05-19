#include<iostream>
using namespace std;
//Global variable declaration
int global = 10;
int main()
{
    cout<<"I am global variable :"<<global<<endl;

    //Local variable declaration
    int local = 20 ;
    global = 30;
    cout<<"I am local variable : "<<local<<endl;
    cout<<"I am global variable :"<<global<<endl;

    return 0;
}
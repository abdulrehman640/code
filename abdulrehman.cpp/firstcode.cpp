#include<iostream>
using namespace std;
int main(){
    float lenght,width;
    cout<<"\n Enter the lenght";
    cin>>lenght ;
    cout<<"\n Enter the width";
    cin>>width;
    int c = lenght * width;
    cout<<"\n Area is :"<<c;
    int e = 2*(lenght + width);
    cout<<"\n Peremeter is :"<<e;
}
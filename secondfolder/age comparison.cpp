#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<<"Enter your age:";
   cin>>age;
   if(age < 13)
   {
    cout<<"You are  child"<<endl;
   } 
   else if(age >= 13 && age < 20 )
   {
    cout<<"You are a teenager"<<endl;
   }
   else if (age >= 20 && age < 65)
   {
    cout<<"You are a adult"<<endl;
   }
   else
   {
    cout<<"You are a senior"<<endl;
   }
    return 0;
}
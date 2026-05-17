#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows :"<<endl;
    cin>>n;
    int i = 1;
    do
    {
        int space = n - i + 1 ;

        do
        {

            cout<<" ";
            space--;

        }while(space > 0);     
       
        int j = 1;
        
        do
        {
           
            cout<<"*";
            j++;

        } while (j <= i);
        
        i++;
        cout<<endl;

    } while (  i  <= n );
    
    return 0;
}
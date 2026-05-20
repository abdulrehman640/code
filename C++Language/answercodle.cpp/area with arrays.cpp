#include<iostream>
using namespace std;
int main()
{
    double w[3] = {0.0, 0.0,0.0};
    for( int i = 0; i < 3; i++)
    {
        switch(i)
        {
            case 1:
                cout<< " Enter the LENGTH: ";
                cin >> w[1];
                break;
            case 2:
                cout<< " Enter the WIDTH: " ;
                cin >> w[2];
                break;
        }
    }
    w[0] = w[1] * w[2];
    cout<<"\n-------------------RESULTS---------------------"<<endl;
    cout<<"Length is: "<<w[1]<<endl;
    cout<<"Width is: "<<w[2]<<endl;
    cout<<"Calculated area is: "<<w[0]<<endl;
    cout<< " ================'THANK YOU!'==================";


    return 0;
}
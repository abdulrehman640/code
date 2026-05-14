#include<iostream>
using namespace std;
int main()
{
    int choice;
    float area,radius;
    float base,height,width;
    float lenght, pi = 3.14;
    cout << " choose the shape to calculate the area :/n1. Circle;e/n2.rectangle/n3.triangle"<<endl;

    cin >> choice;

    if(choice == 1 )
    {
        cout << "Enter the radius of the circle :" <<endl;

        cin >> radius;

        area = pi * radius * radius;

        cout << " The area if the circle is :"<<area                                         <<endl;
    }
    else if ( choice == 2)
    {
        cout << " Enter the lenght of the rectangle :"                                       <<endl;

        cin >> lenght;

        cout << " Enter the width of the rectangle :"                                        <<endl;
        
        cin >> width ;

        cout << " The area of rectangle is :" << lenght * width                              <<endl;
    }
    else
    {
        cout << " Enter the base of the triangle :"                                          <<endl;

        cin >> base;

        cout << " Enter the height of the triangle :"                                        <<endl;

        cin >> height;
    }

    return 0;
}
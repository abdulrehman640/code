//number of digits in  an integer and their sum
#include<iostream>
using namespace std;
int main()
{
    int n , c = 0 , sum = 0, reminder;
    cout << " Enter the number : ";
    cin >> n;

    if(n < 0)    
        n = -n;

    if (n == 0)
    {  
        c = 1;

        sum = 0;
    }
        while(n != 0 )
        {
            reminder = n % 10;

            sum = sum + reminder;

            n = n/10;

            c++;
        }
         cout << "Number of digits : " << c << endl;

         cout << " Sum of digits : " << sum << endl;

    return 0;
}
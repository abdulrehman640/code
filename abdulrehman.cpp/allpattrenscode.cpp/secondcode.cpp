#include<iostream>
using namespace std;
int main()
{
   int size;
   cout << "Enter the size of square: ";
   cin >> size;

   if (size <= 0) {
       cout << "Size must be positive." << endl;
       return 0;
   }

   int i = 1;
   do {
       int j = 1;
       do {
           if (i == 1 || i == size || j == 1 || j == size) {
               cout << "*";
           } else {
               cout << " ";
           }
           if (j < size) {
               cout << " ";
           }
           j++;
       } while (j <= size);

       cout << endl;
       i++;
   } while (i <= size);

   return 0;
}
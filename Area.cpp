/*5.Write a program in C++ to find the Area and Perimeter of a Rectangle*/
// Area = L * B
// Perimeter = 2(L+B)
#include <iostream>
using namespace std;

int main()
{
    int length = 0, breadth = 0;
    int area = 0, perimeter = 0;

    //inputs
    cout << "Enter len : " << endl;
    cin >> length;

    cout << "ENter breadth : " << endl;
    cin >> breadth;

    // cal
    area = length * breadth;
    cout << "Area : " << area << endl;

    perimeter = 2 * (length + breadth);
    cout << "Perimeter :" << perimeter << endl;


    return 0;
}
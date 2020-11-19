#include<iostream>

using namespace std;

int main()
{
    int length = 0, breadth = 0;

    cout << "Enter Length: ";
    cin>>length;

    cout << "Enter Breadth: ";
    cin>>breadth;

    int area = length * breadth;
    int peri = 2 * (length + breadth);

    cout << "Area and Perimeter: " << area << " " << peri;
}

#include<iostream>

using namespace std;

int area(int length, int breadth)
{
    return length*breadth;
}

int perimeter(int length, int breadth)
{
    return 2 * (length + breadth);
}

int main()
{
    int length = 0, breadth = 0;

    cout << "Enter length: ";
    cin>>length;

    cout << "Enter breadth: ";
    cin>>breadth;

    int a = area(length, breadth);
    int peri = perimeter(length, breadth);

    cout << "Area and perimeter is " << a << " " << peri;

    return 0;
}

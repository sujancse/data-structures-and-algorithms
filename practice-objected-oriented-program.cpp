#include<iostream>

using namespace std;

class Rectangle
{
    int length;
    int breadth;


public:
    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;
    int l,b;

    cout << "Enter length: ";
    cin>>l;

    cout << "Enter breadth: ";
    cin>>b;

    r.initialize(l,b);

    int a = r.area();
    int peri = r.perimeter();

    cout << "Area and perimeter is " << a << " " << peri;

    return 0;
}



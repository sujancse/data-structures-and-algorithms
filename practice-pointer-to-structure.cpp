#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
//    Rectangle r = {10, 5};
//
//    cout << r.length << endl;
//    cout << r.breadth << endl;
//
//    Rectangle *p = &r;
//
//    cout << p->length << endl;
//    cout << p->breadth << endl;

    // In c language
//    struct Rectangle *p;
//    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
//
//    p->length = 20;
//    p->breadth = 10;
//
//    cout << p->length << endl;
//    cout << p->breadth << endl;

    // In cpp
    Rectangle *p;
    p = new Rectangle;

    p->length = 30;
    p->breadth = 20;

    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}

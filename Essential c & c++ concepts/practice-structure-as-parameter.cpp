#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

//void fun(struct Rectangle *r)
//{
//    r->breadth = 5;
//    cout << "Length: " << r->length << endl << "Breadth: " << r->breadth << endl;
//}

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 20;
    p->breadth = 30;

    return p;
}

int main()
{
//    struct Rectangle r = {10, 4};
//
//    fun(&r);
//
//    cout << "Length: " << r.length << endl << "Breadth: " << r.breadth;

    struct Rectangle *ptr = fun();

    cout << "Length: " << ptr->length << endl << "Breadth: " << ptr->breadth << endl;

    return 0;
}

#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
} r1;

int main()
{
    //struct Rectangle r1;

    cout << "Length: " << r1.length << endl;
    cout << "Sizeof: " << sizeof(r1) << endl;
}

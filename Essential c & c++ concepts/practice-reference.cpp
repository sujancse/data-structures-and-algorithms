#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a; // reference is nothing but an alias/another name
    cout << a << endl << r << endl;

    a = 30;
    cout << a << endl << r << endl;

    r = 50;
    cout << a << endl << r << endl;

    return 0;
}

#include<iostream>


using namespace std;

int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int A[n] = {2, 3, 4};

    cout << A[0] << endl;
    cout << sizeof(A) << endl;
    cout << A[2] << endl;

    for(int x:A) // for each loop
    {
        cout << x << endl;
    }
}

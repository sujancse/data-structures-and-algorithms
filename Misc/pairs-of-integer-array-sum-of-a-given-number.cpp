#include<iostream>

using namespace std;

int main()
{
    int number = 100;
    int A[] = {0};

    for (int i = 0; i < number; i++)
    {
        for (int j = i; j < number; j++)
        {
            if (i + j == number)
            {
                cout << i << ", " << j << endl;
            }
        }
    }
}

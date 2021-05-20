#include<iostream>

using namespace std;

void hashTable(int A[], int k, int n)
{
    int H[n] = {0};

    for (int i = 0; i < n; i++)
    {
        int x = k - A[i];

        if (H[x] == 1)
            cout << A[i] << "," << x << endl;
        else
            H[A[i]] = 1;
    }
}

void bruteForce(int A[], int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) {
            if (A[i] + A[j] == k)
                cout << A[i] << "," << A[j] << endl;
        }
    }
}

int main()
{
    int k = 7, n = 5;
    int A[n] = {7, 0, 3, 4, 5};

    //bruteForce(A, k, n);
    hashTable(A, k, n);

    return 0;

}

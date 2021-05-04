#include<stdio.h>

int main()
{
    int i;
    char A[] = "John Joe";
    char H[50] = {0};

    for(i = 0; A[i] != '\0'; i++) {
        H[A[i]-65]++;
    }

    for (i = 0; i < 50; i++) {
        if (H[i] > 1) {
            printf("%c is %d times duplicates\n", i + 65, H[i]);
        }
    }
}

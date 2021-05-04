#include<stdio.h>
#include<iostream>

using namespace std;

bool isVowel(char c) {
    return c == 'a' ||
        c == 'A' ||
        c == 'e' ||
        c == 'E' ||
        c == 'i' ||
        c == 'I' ||
        c == 'o' ||
        c == 'O' ||
        c == 'u' ||
        c == 'U';
}

bool isConsonant(char c)
{
    return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}

void trimSpaces(char *A)
{
    int index = -1;
    int i = 0;

    while(A[i] != '\0')
    {
        if(A[i] != ' ' && A[i] != '\n' && A[i] != '\t')  {
            index = i;
        }

        i++;
    }

    A[index+1] = '\0';
}

int main()
{
    char A[] = "How are      you      ";
    int i = 0, vcount = 0, ccount = 0, wcount = 0;

    trimSpaces(A);

    while(A[i] != '\0') {
        if(isVowel(A[i]))
            vcount++;

        else if(isConsonant(A[i]))
            ccount++;

        if(A[i] == ' ' && A[i-1] != ' ')
            wcount++;

        i++;
    }

    printf("Vowels count: %d\n", vcount);
    printf("Consonants count: %d\n", ccount);
    printf("Word count: %d", wcount + 1);

    return 0;
}

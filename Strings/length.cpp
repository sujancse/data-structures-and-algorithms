#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    char *s = "SUJAN";
    string m = "MAHMUD";
    int i = 0;

    while(s[i] != '\0') {
        i++;
    }

    printf("Length of string is: %d", i);
}

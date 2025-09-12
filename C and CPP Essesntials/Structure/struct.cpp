#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x; // it is allocating 4 (equal to size of nearest datatype = integer )bytes for the character but will use only one byte because it is easy for the compiler to work with the 4 bytes, it is called padding of memory.
} r1, r2, r3;

struct Rectangle r4;

int main()
{
    struct Rectangle r5 = {10,5};

    r1.length = 10;
    r1.breadth = 12;


    printf("%lu", sizeof(r1));

    cout << r1.length << endl;
    cout << r1.breadth << endl;
    cout << r5.length << endl;
    cout << r5.breadth << endl;
    return 0;

}
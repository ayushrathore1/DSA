#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;

};

int main()
{
    Rectangle *p; // created in stack memory
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // dynamically created in Heap memory

    p -> length = 12;
    p -> breadth = 10;

    cout << p -> length << endl; 
    cout << p -> breadth << endl; 

    return 0;

}
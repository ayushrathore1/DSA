#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int length = 0,breadth = 0;
    // it is a good practice to initialize the variables at the time of decalartion

    printf("Enter length anf beadth");
    cin >> length >> breadth;

    int area = length * breadth;
    int peri = 2 * (length + breadth);

    printf("Area = %d\n Perimeter = %d\n", area, peri);

    return 0;
}

#include<iostream>
#include<stdio.h>

using namespace std;

int area(int length, int breadth)
{
    return length * breadth;
}

int perimeter(int length, int breadth)
{
    return 2 * (length + breadth);
}

int main()
{
    int length = 0, breadth = 0;

    printf("Enter length and breadth: ");
    cin >> length >> breadth;

    int a = area(length, breadth);
    int peri = perimeter(length, breadth);

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;

}
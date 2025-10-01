#include<iostream>
#include<stdio.h>

using namespace std;

// in cpp there is one difference in struct and class
// in struct by default everything is public
// in class by default everything is private

struct rectangle
{
    int length;
    int breadth;

void initialize(int l, int b)
{
    length = l;
    breadth = b;
}

int area() 
{
    return length * breadth;
}

int perimeter() // because it is a cpp program there is no need to write struct before rectangle
{
    return 2 * (length + breadth);
}


};

int main()
{
    // also if we had written class instead of struct 
    // then we cannot initialize the object directly
    rectangle r = {0, 0}; // object creation

    int l, b;
    printf("Enter length and breadth: ");
    cin >> l >> b;

    r.initialize(l, b);

    int a = r.area();
    int peri = r.perimeter();

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;

}
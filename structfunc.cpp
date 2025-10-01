#include<iostream>
#include<stdio.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle r) 
{
    return r.length * r.breadth;
}

int perimeter(rectangle r) // because it is a cpp program there is no need to write struct before rectangle
{
    return 2 * (r.length + r.breadth);
}

void initialize(rectangle *r, int l, int b)
{
    r -> length = l;
    r -> breadth = b;
}

int main()
{
    rectangle r = {0, 0};

    int l, b;
    printf("Enter length and breadth: ");
    cin >> l >> b;

    initialize(&r, l, b);

    int a = area(r);
    int peri = perimeter(r);

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;

}
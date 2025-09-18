#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void fun(struct Rectangle r)
{
    cout << "length " << r.length << endl;
    r.length = 20; // only the formal parameter changes not actual
    cout << "length " << r.length << endl;
    cout << "breadth " << r.breadth << endl;
}

int main()
{
    struct Rectangle r = {10, 5};
    fun(r);
    printf("length %d \nbreadth %d\n", r.length, r.breadth);
}

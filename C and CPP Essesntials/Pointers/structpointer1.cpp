#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    Rectangle r = {10,5}; // object of a rectangle
    cout << r.length << endl;
    cout << r.breadth << endl;


    Rectangle *p ;
    p = &r;

    cout << (*p).length << endl;
    cout << p->breadth << endl;
    


    return 0;
}
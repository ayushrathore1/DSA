#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p)
{
    cout << "length " << p->length<<endl;
    p->length = 20;

    cout << "length" << p->length << endl;
    cout << "breadth " << p->breadth << endl;
}

int main()
{
    struct Rectangle r = {10, 5};
    fun(&r);
    // both formal and


    printf("length %d \nbreadth %d\n",r.length, r.breadth);
}
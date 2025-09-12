#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main() {

int *p1;
char *p2;
float *p3;
double *p4;
struct Rectangle *p5;

cout << sizeof(p1)<<endl; // 8
cout << sizeof(p2)<<endl; // 8
cout << sizeof(p3)<<endl; // 8
cout << sizeof(p4)<<endl; // 8
cout << sizeof(p5)<<endl; // 8

// siz





return 0;
}
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    r = 25;

    // reference is an another name for a variable
    // A refernce must be initialized at the time of declaration only
    // we cannot change the previously declareed reference to another variable

    /*
    int r is a variable  
    int *r is a pointer  
    int &r is a reference  
    */


    // a reference don't consume the memory it just utilizes the memory of the variable it is referencing

    int b = 30;
    r = b;

    cout << a << endl<<r << endl;


    return 0;
}
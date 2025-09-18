#include<iostream>
using namespace std;

int * fun(int size)
{
    int *p;
    p = new int[size];

    for(int i = 0; i < size; i++)
        p[i] = i+1;

        return p;
    // an array is created in heap by the fun function
}

int main()
{
    int *ptr, sz = 7;
    ptr = fun(sz);

    // the main function can access the array because it gets the pointer to the array 
    for(int i=0;i<sz;i++)
    {
        cout << ptr[i]<<endl;
    }

    return 0;
}
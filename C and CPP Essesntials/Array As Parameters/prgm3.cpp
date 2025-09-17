#include<iostream>
using namespace std;

void fun(int A[], int n)
{

    for(int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }


   // cout << sizeof(A)/sizeof(int) << endl;

    // it gives the output 2 -> 8/4 = 2
}

// so when we pass the array as a parameter to the function, we also pass the size of the array or the number of elements in the array

int main()
{
    int A[] = {2, 4,6,8,10};
    int n = 5;

    // both the A in the formal parameters and the A in the main function are different

     cout << sizeof(A)/sizeof(int) << endl; 
     // it will give the output 5 
    fun(A,5);

    // for(int x:A)
    //     cout << x << endl;

    return 0;
}

// the function fun results 2 because the size of the pointer A is 8 i and size of int is 4 in latest compilers , so 8/4 is 2;

// means the A in the function fun is a pointer not an array and is of size 8 bytes
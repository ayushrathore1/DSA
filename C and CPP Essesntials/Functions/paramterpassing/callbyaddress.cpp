#include<iostream>
using namespace std;


// types of formal parameter should be pointer
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int n1 = 10, n2 = 15;


    // we pass address of actual parameters

    // the formal parameter pointers will be indirectly accessing the values of actual parameters
    swap(&n1, &n2);
    cout << "First Number " << n1 << endl;

    cout << "Second Number " << n2 << endl;

    return 0;
}

// when to use :
// when we need to directly woprk upon the actual parameters we use this call by address
// one more case when we have to modify or work upon the variables of main function, like in this case n1 and n2
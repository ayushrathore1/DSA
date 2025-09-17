#include<iostream>
using namespace std;


// types of formal parameter should be reference
void swap(int &x, int *y)
{
    int temp;
    temp = x;
    x = *y;
    *y = temp;
}

// reference is just another name or a nickname of the variable

int main()
{
    int n1 = 10, n2 = 15;


    // we pass actual parameters

    // the formal parameter rference will be directly accessing the values of actual parameters because they points to the same memory location
    swap(n1,n2);

    // here the swap function may become the inline function depending on the compiler making this program monolithic

    // two possibilities are here, either the code of the swap function gets copied here at the fucntion call

    // or the compiler may make the formal parameters as pointer, so it will work as the pass by address but with the syntax of the pass by reference

    cout << "First Number " << n1 << endl;

    cout << "Second Number " << n2 << endl;

    return 0;
}

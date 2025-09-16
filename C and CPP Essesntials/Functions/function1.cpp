#include<iostream>
using namespace std;

// function definition
int add(int a, int b) // a and b are formal parameters
{
    int c;
    c = a + b;
    return c;

}

int main()
{

    int n1 =10, n2 = 12, sum;

   sum = add(n1,n2); // result of the function is copied in the sum variable

// n1 and n2 are actual parameters

// values of n and n2 are copied in a and b respectively


   cout << "sum is " << sum << endl;

   return 0;
}



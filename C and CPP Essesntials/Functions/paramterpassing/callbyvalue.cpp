#include<iostream>
using namespace std;

int add(int a, int b)
{
    // int c;
    // c = a+ b;

    a++;
    cout << "Inside the add funtion " << a << endl;
    return 0;
}


int main()
{
    int n1 = 10, n2 = 20, sum;
    sum = add(n1, n2);
    cout << "Actual " <<  n1 << endl;
    return 0;

}

// when to use the call by value

// when we need a function to process something and return a result, it takes some parameters and return results without changing actual parameters
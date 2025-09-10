#include<iostream> 
#include<stdio.h>
using namespace std;

int main()
{
    int i;
    int A[10] = {0}; // all the elements of the array will be zero
 
    int B[6] = {1,3,43,6,2};
    cout << sizeof(A) << endl;
    
    // for(i = 0; i<10;i++)
    // {
    //     cout << A[i] << endl;
    // }
    int n;
    cout << "Enter Size" << endl;
    cin >> n;

    int C[n];
    cout << "Enter data" << endl;
    for(i=0; i<n;i++)
    {
        cin >> C[i];
    }

    for(i = 0; i < n; i++)
    {
        cout << C[i] << endl;
    }
  
    


    for(int x:B)
    {
        cout << x << endl;
    } // for each loop


    return 0;

}
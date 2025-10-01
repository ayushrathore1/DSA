#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
    private:
    T a;
    T b;

    public:
    Arithmetic(T a, T b);
    T add();
    T sub();


}; 
    
    template <class T>
    Arithmetic<T> :: Arithmetic(T a, T b) // parameterized constructor
    {
        this -> a = a; // this is a pointer which points to current object of the class
        this -> b = b;
    }

    template <class T>
    T Arithmetic <T> :: add()
    {
        T c;
        c = a + b;
        return c;
    }

    template <class T>
    T Arithmetic <T>:: sub()
    {
        T c;
        c = a - b;
        return c;
    }


int main()
{
    Arithmetic<int> ar(10, 5);
    Arithmetic<float> ar2(2.6, 10); 
    Arithmetic<char> ar3('Q', 'B'); 

    cout << "Add " << ar.add() << endl;
    cout << "Sub " << ar.sub() << endl;
    cout << "Add " <<(int)ar3.add() << endl;
    cout << "Sub " << (int)ar3.sub() << endl;
    cout << "Add " << ar2.add() << endl;
    cout << "Sub " << ar2.sub() << endl;

    return 0;


}
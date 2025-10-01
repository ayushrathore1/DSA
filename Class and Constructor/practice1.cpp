#include<iostream>
using namespace std;

class Rectangle
{
    private :
    int length;
    int breadth;

    public:
    Rectangle() // Default Constructor
    {
        length = breadth = 0;
    }

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

    void setlength(int l) // mutator function
    {
        length = l;
    }

    void setBreadth(int b) // mutator function
    {
        breadth = b;
    }

    int getLength() // accessor function
    {
        return length;
    }

    int getBreadth() // accessor function
    {
        return breadth;
    }

    ~Rectangle() // Destructor
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Rectangle r(5,6);
    cout << "Area " << r.area() << endl;
    cout << "Perimeter " << r.perimeter() << endl;

    return 0;
}
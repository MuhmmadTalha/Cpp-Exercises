// Task 2: Compile-Time Binding with Classes:
//  Create a class Math with multiple overloaded methods for addition (e.g., two integers, two
//  floats, and one integer and one float).

#include <iostream>
using namespace std;

class Math
{
    // int int1, int2;
    // float float1, float2;

public:
    // Math(int n1, int n2, float f1, float f2) : int1(n1), int2(n2), float1(f1), float2(f2) {}
    void addition(int n1, int n2)
    {
        int ans = n1 + n2;
        cout << "After adding two integers answer is: " << ans << endl;
    }

    void addition(float f1, float f2)
    {
        float ans = f1 + f2;
        cout << "After adding two floats answer is: " << ans << endl;
    }

    void addition(int n1, float f2)
    {
        float ans = n1 + f2;
        cout << "After adding one integer and one float answer is: " << ans << endl;
    }
};

int main()
{
    Math m;
    m.addition(2, 2);       // Call with two integers
    m.addition(6.1f, 6.7f); // Call with two floats
    m.addition(2, 9.5f);    // Call with one integer and one float

    return 0;
}
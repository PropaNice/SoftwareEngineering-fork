#include <iostream>
#include <iomanip>

//This is a prefix needed for cout and endl
using namespace std;

int main()
{
    // ************************ Using cout *******************************
    cout << "Hello World!" << endl;   // Write Hello World to the terminal

    // ***************** Using cout with newlines ************************
    cout << "Hello Everyone. We are using C++\nWe can still use \\n\n";

    // ********************** Setting Precision **************************
    int age = 25;
    cout << "My age is  " << age << endl;
    cout << "Next year my age will be " << ++age << endl;
/* my entry point, 
    ++ allows increment by the value by one before using it
    -- allows decrement of the value
    
    There is a trick here, the posistioning of ++x or x++ 
    determines how the variable will be affected. For example, 
    if you use age++ it will increment the value of the variable,
    but not update the value until after the line is executed.
    This means that "age" will remain as 25, but instead if we used ++age 
    it will increment the value and maintain the new value stored in the variable.
    */
    
    // Setting precision is not so easy?
    float radius = 10.0f;
    float area = 3.415926 * radius * radius;  
    // My entry point, area of circle = pi * r^2 

    cout << fixed;
    cout << setprecision(1);
    cout << "The area of a circle with radius " << radius << " is " << area << endl;

    // You can output complex strings to the terminal
    int p = 3;
    int q = 4;
    cout << "p=" << p << ", q=" << q << endl;
}



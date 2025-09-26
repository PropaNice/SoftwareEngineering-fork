#include <stdio.h>

int main()
{
    // ************************ Using puts ******************************** 
    puts("Hello World!");   //Write Hello World to the terminal


    // ************************ Using printf ******************************* 
    printf("Hello Everyone. We are using C\nHow are things?\n");
    // TASK (a) - remove \n from the string above - what does this change? 
    
    /* This my entry point  
    Response to Task (a): Removing "\n" from the string will not add a new line after "C", 
    so "How are things?" will be printed on the same line
    */

    // ******************* Using printf placeholders *********************** 
    int age = 23;
    printf("My age is %d\n", age);

    // Some other placeholders include %c for character and %f for floating point
    float radius = 10.0f;
    float area = 3.415926 * radius * radius;

    // TASK(b) - Use printf to display the value of the variable area. 
    // Look at the lecture slides and find out how to limit this to 3 decimal places
    // Write solution here
    
    /* This my entry point  

    Response to Task (b): To limit the output of the variable area to 3 decimal places,
    In order to output the variable area to 3 decimal points we have to use 
    (%.xf) where x is the number of decimal points we want to display.
    */
    
    printf("The area is %.3f\n", area);
   
    /* we call the printf function with the string, we also call the variable area 
    and limit the float value to 3 decimal places using %.3f.
    */

    // You can output complex strings to the terminal
    int p = 3;
    int q = 4;
    printf("p=%d, q=%d\n", p, q);

    // TASK(c) - using printf, display the radius and the area using a single printf statement
    // Write solution here
    
    /* This my entry point
    
    Response to Task (c): To display the radius and area using a single printf statement,
    to display multiple variables in a single printf statement we can use multiple
    calls for variables in the string. 
    */
    
    printf("radius=%.3f, area=%.3f\n", radius, area);
    // we call the printf function with the string, we use %f to display the values as float.
    // we also call the variables radius and area.
    // we use comma to separate the variables in the call.
    // like the previous task we limit the float values to 3 decimal places using %.3f.
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


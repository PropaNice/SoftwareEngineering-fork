#include <stdio.h>

int main()
{
    //Create a variable of type char (8-bit integer)
    char c = 0;
    
    //Read the keyboard and copy the ASCII code into c
    c = getchar();

    // Prompt user for input
    printf("Please input a single character\n");
    
    //Write the decimal and ASCII representation to the terminal
    printf("You typed %c\n", c);
    printf("This has ASCII code %d\n", c);


    // This is my entry point
    // when the program executes getchar() will listen to for the first input from the user,  
    // %c will output the character the user inputs
    // %d will then output entered character denoted by its ASCII code
    // This because we are outputing a character as a decimal which gives us its corresponding ASII code
}
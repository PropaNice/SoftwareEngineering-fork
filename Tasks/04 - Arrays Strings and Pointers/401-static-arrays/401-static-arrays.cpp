// N.B floats are 4 bytes, doubles are 8 bytes
#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    //Create and initialise an array
    int nums[] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99, 111 };

    // Write out the size
    cout << "The array nums consumed " << sizeof(nums) << " bytes." << endl;

    //We can actually calculate the length of the array as follows:
    int N = sizeof(nums) / sizeof(int);

    cout << "The array nums contains " << N << " elements of type int" << endl;

    //Write the start address (just curious)
    cout << "The start address of the array nums is " << nums << " (hex)" << endl;

    //Write out all elements of the array
    for (unsigned int n = 0; n < N; n++) {
        int next = nums[n];                                             //Read by de-referencing
        cout << "Element " << n << " of nums = " << next << endl;       //Write to terminal
    }

    //Modify each element of the array
    for (unsigned int n = 0; n < N; n++) {
        int newValue = nums[n] + 1;             //Read (by de-referencing) and add one    
        nums[n] = newValue;                     //Write into the array (again, using de-referencing)
    }

    cout << "Add one...." << endl;

    //Write out all elements of the array again - shorter version this time
    for (unsigned int n = 0; n < N; n++) {
        cout << "Element " << n << " of nums = " << nums[n] << endl;
    }



    // **************************************************************************
    // TASK 1 - calculate and display the SUM of all elements in the array nums *
    // **************************************************************************

    //Write task 1 solution here
    uint64_t sum = 0L;   //Result needs to be bigger than int to avoid overflow
    for (int n = 0; n < N; n++) {
        sum += (long)nums[n];
        printf("Adding element %d value %d to sum, new sum = %lld\n", n, nums[n], sum); 
    }
        printf("final sum = %lld\n", sum);

    // ***********************************************************************************************************************
    // TASK 2 - calculate the mean of all elements (this will be a fractional value) and display to 1 decimal place accuracy *
    // ***********************************************************************************************************************
    // C version
    float mean = (float)sum / (float)N;
    printf("Mean = %.2f\n", mean);
    
    // C++ version
    // more of a headache, but good to know.
    cout.precision(1);
    cout << "Mean = " << std::fixed << mean;

    
}



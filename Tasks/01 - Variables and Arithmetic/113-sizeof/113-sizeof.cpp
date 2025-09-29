#include <stdio.h>
 
int main()
{
	char x = 10;
	short s = -12345;
	int integerValue = 1234567891;
	long bigValue = 1234567891;
	long long veryBigValue = -123456789123456789;
	unsigned long long sillyBigPositiveValue = 12345678912345678912;

	//How to write values to the terminal
	printf("x = %d\n", x);
	printf("s = %d\n", s);
	printf("integerValue = %d\n", integerValue);
	printf("bigValue = %ld\n", bigValue);
	printf("veryBigValue = %lld\n", veryBigValue);
	printf("sillyBigPositiveValue = %llu\n", sillyBigPositiveValue);

	//Extra newline
	printf("\n");

	//Display a table of date types and sizes
	printf("Type\t\tSize(Bytes)\n");	//The \t character is a TAB
	printf("----\t\t-----------\n");

	// TASK: Display the size of ALL the integer data types
	// Write your solution below here. The first one is done for you.


	// QUESTION?

	// Why are we using %llu (unsigned long long) for every data type?
	// Isnt this more resource intensive? 
	// Is there a better alternative for small values?

	//This is the entry point of my code 
	// Answers to Task
	printf("char\t\t\t%llu\n", sizeof(char));	//sizeof() returns a value of type unsigned long long
	printf("short\t\t\t%llu\n", sizeof(short));
	printf("int\t\t\t%llu\n", sizeof(int));
	printf("long\t\t\t%llu\n", sizeof(long));
	printf("long\t\t\t%llu\n", sizeof(long long));
	printf("unsigned long long\t%llu\n", sizeof(unsigned long long));

	printf("\n");

	printf("The value of the variable x is %llu \n", x);
	printf("The value of the variable s is %llu \n", s);
	printf("The value of the variable integerValue is %llu \n", integerValue);
	printf("The value of the variable bigValue is %llu \n", bigValue);
	printf("The value of the variable veryBigValue is %llu \n", veryBigValue);
	printf("The value of the variable sillyBig is PositiveValue %llu \n", sillyBigPositiveValue);


}
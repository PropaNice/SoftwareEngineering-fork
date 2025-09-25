#include <stdio.h>

int main()
{ // Block opening brace

	char c = 88;				// Character (1 byte)
	short year = 2023;			// Short integer
	int age = 25;				// Integer
	long bigNumber = 123456789;	// Long integer
	long long veryBigNumber = 1LL << 30;	//2^30 - challenge (advanced), why have I put 1LL?
	
	/*
	This is my entry point.
	
	LL means "long long integer, which allows us to specify 
	a 64-bit integer which extends the range of a 9,223,372,036,854,775,807 
	or as a unsigned integer this extends to 18,44,467,440,737,095,516,15

	unsigned values return to 0 after exceeding this range and dont allow for negative values
	signed values return to negative values after exceeding their max positive range

	int 32-bit signed integer -2,147,483,648 to 2,147,483,647
	short 16-bit signed integer range is -32,768 to 32,767
	32-bit unsigned integer range is 0 to 4,294,967,295
	16-bit unsigned integer range is 0 to 65,535
	*/
	printf("c=%d\n", c);
	printf("year = %hd\n", year);
	printf("age = %d\n", age);
	printf("bigNumber = %ld\n", bigNumber);
	printf("veryBigNumber = %lld\n", veryBigNumber);

	//Addition
	int ageNextYear;
	ageNextYear = age + 1;
	printf("Next birthday, you will be %d\n", ageNextYear);

	//Increment
	ageNextYear++;
	printf("And then after that, you will be %d\n", ageNextYear);

	//Overflow
	year = 32767;
	year = year + 1;
	printf("year = %d\n", year);

	//Divide
	age = 50;
	age = age / 2;
	printf("Half of 50 is %d\n", age);
	 
	//Divide and remainder
	age = 51;
	age = age / 2;
	int remainder = age % 2;
	printf("Half of 51 is %d, remainder %d\n", age, remainder);

} 
/*  C program to find sum of digits 
of a number using recursion*/ 
#include <stdio.h> 

// Function to check sum of digit using recursion 
int sum_of_digit(int a) 
{ 
	if (a==0) 
	return 0; 
	return (a % 10 + sum_of_digit(a / 10)); 
} 

 
int main() 
{ 
	int num = 1234; 
	int result = sum_of_digit(num); 
	printf("Sum of digits in %d is %d\n", num, result); 
	return 0; 
} 


// 668_SquareRootSmoothNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
A positive integer is called square root smooth if all of its prime factors are strictly less than its square root.
Including the number 1, there are 29 square root smooth numbers not exceeding 100.

How many square root smooth numbers are there not exceeding 10000000000?
*/

#include "pch.h"
#include <iostream>


int PrimeFactorLessThanSqrt(long long n, long long original)
{
	long long i;
	double dasquarerut = sqrt(original);
	//if (n == 1) return 1; //could remove this and just add 1 to final count.
	for (i = 2; (i < n / (float) 2) && (n % i != 0); i++);
	if (i <= n / 2)
		return (i < dasquarerut && PrimeFactorLessThanSqrt(n / i, original));
	else
		return (n < dasquarerut);
}

int main()
{
	long long i, ctr = 0;
	printf("\Go!");
	for (i = 1; i <= 100; i++)
		if (PrimeFactorLessThanSqrt(i, i))
			ctr++;
	printf("\n%d", ctr + 1); 
	//if (PrimeFactorLessThanSqrt(999999937, 999999937))
	//	printf("Meh!" ); 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

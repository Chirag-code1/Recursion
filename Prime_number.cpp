
#include <bits/stdc++.h>
// or #include  <iostream>
using namespace std;

bool isPrime(int n, int i = 2)
{
	// Base cases
	if (n <= 2)
		return (n == 2) ? true : false;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;

	// Check for next divisor
	return isPrime(n, i + 1);
}

int main()
{
	int n = 15;
	if (isPrime(n))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}

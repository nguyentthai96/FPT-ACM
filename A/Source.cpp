#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool chekFibonaci(long double f1, long double f2, long double n);

int main()
{
	long n;
	cin >> n;

	long double temp;
	
	for (long i = 0; i < n; i++)
	{
		cin >> temp;
		
		if (chekFibonaci(1, 1, temp))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}

bool chekFibonaci(long double f1, long double f2, long double n)
{
	if (f2 == n)
	{
		return true;
	}
	else
	{
		long double f = f2;
		f2 = f1 + f2;
		f1 = f;
		if (f1 > n)
		{
			return false;
		}
		return chekFibonaci(f1, f2, n);
	}
}
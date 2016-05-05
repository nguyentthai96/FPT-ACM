#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long n;
	cin >> n;
	
	long arrA[500005];
	for (long i = 0; i < n; i++)
	{
		cin >> arrA[i];
	}
	long *min=min_element(arrA, arrA+n);

	for (long i = 0; i < n; i++)
	{
		cout<<arrA[i] * *min;
	}
}
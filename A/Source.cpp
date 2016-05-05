#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	int m, n, k;
	cin >> k >> m >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	vector<int> vbenh;
	for (unsigned int i = 0; i < v.size; i++)
	{
		int a = v[i];
		for (unsigned int j = 0; j < v.size; j++)
		{
			int b = v[j];
			vbenh.push_back((a*b) % m);
		}
	}
	if (!(k > 2))
	{
		sort(vbenh._Myfirst, vbenh._Mylast);
		for (unsigned int j = 0; j < vbenh.size; j++)
		{
			cout << vbenh[j];
		}
		return 0;
	}
	vector<int> vbenhmoi;
	for (unsigned int i = 0; i < v.size; i++)
	{
		int a = v[i];
		for (unsigned int j = 0; j < vbenh.size; j++)
		{
			int b = vbenh[j];
			vbenhmoi.push_back((a*b) % m);
		}
	}
}












//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <set>
//#include <cstring>
//using namespace std;
//int const mx = 6666;
//set <unsigned long long> f;
//unsigned long long fib[mx + 10];
//char s[mx + 1];
//int main() {
//	//	freopen("input.txt", "r", stdin);
//	//	freopen("output.txt", "w", stdout);
//	fib[0] = 0;
//	fib[1] = 1;
//	f.insert(1);
//	f.insert(0);
//	int i;
//	for (i = 2; i <= mx; i++) {
//		fib[i] = fib[i - 1] + fib[i - 2];
//		f.insert(fib[i]);
//	}
//	int tc;
//	cin >> tc;
//	while (tc--) {
//		unsigned long long n = 0, ten = 10;
//		cin >> s;
//		int len = strlen(s);
//		for (i = 0; i < len; i++) {
//			char q = s[i];
//			unsigned long long a = q - '0';
//			n = n * ten + a;
//		}
//		if (f.find(n) == f.end()) printf("NO\n");
//		else printf("YES\n");
//	}
//	return 0;
//}
//
////
////#include <stdio.h>
////#include <iostream>
////#include <string>
////#include <math.h>
////
////using namespace std;
////
////bool chekFibonaci(long double f1, long double f2, long double n);
////
////
////bool isPerfectSquare(long double x)
////{
////	long long s = (long long)sqrt(x);
////	return (s*s == x);
////}
////bool isFibonacci(long double n)
////{
////	// n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
////	// is a perferct square
////	return isPerfectSquare(5 * n*n + 4) ||
////		isPerfectSquare(5 * n*n - 4);
////}
////
////
////
////int main()
////{
////	long n;
////	cin >> n;
////
////	long double temp;
////	
////	for (long i = 0; i < n; i++)
////	{
////		cin >> temp;
////		
////		if (temp>0 && isFibonacci(temp))
////		{
////			cout <<"Yes" << endl;
////		}
////		else
////		{
////			cout << "No" << endl;
////		}
////	}
////}
////
////bool chekFibonaci(long double f1, long double f2, long double n)
////{
////	if (f2 == n)
////	{
////		return true;
////	}
////	else
////	{
////		long double f = f2;
////		f2 = f1 + f2;
////		f1 = f;
////		if (f1 > n)
////		{
////			return false;
////		}
////		return chekFibonaci(f1, f2, n);
////	}
////}
////

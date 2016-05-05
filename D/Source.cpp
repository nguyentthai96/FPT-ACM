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
	for (int i = 0; i < v.size; i++)
	{
		int a = v[i];
		for (int j = 0; j < v.size; j++)
		{
			int b = v[j];
			vbenh.push_back((a*b) % m);
		}
	}
	if (!(k > 2))
	{
		sort(vbenh._Myfirst, vbenh._Mylast);
		for (int j = 0; j < vbenh.size; j++)
		{
			cout << vbenh[j];
		}
		return 0;
	}
	vector<int> vbenhmoi;
	for (int i = 0; i < v.size; i++)
	{
		int a = v[i];
		for (int j = 0; j < vbenh.size; j++)
		{
			int b = vbenh[j];
			vbenhmoi.push_back((a*b) % m);
		}
	}
}









//int main()
//{
//	long n;
//	cin >> n;
//
//	long arrA[500005];
//	for (long i = 0; i < n; i++)
//	{
//		cin >> arrA[i];
//	}
//	long *min = min_element(arrA, arrA + n);
//	long result = 0;
//	for (long i = 0; i < n; i++)
//	{
//		if (min != &arrA[i])
//			result += (arrA[i] * *min) % 1000000007;
//	}
//	cout << result % 1000000007;
//}
#include <bits/stdc++.h>
using namespace std;


int getMissingNo(int a[], int n)
{
	int x1 = a[0];

	int x2 = 1;

	for (int i = 1; i < n; i++)
		x1 = x1 ^ a[i];

	for (int i = 2; i <= n + 1; i++)
		x2 = x2 ^ i;

	return (x1 ^ x2);
}


int main()
{
	int arr[] = { 1, 2, 3, 4,5,6,7,9};
	int N = sizeof(arr) / sizeof(arr[0]);
	int miss = getMissingNo(arr, N);
	cout << miss;
	return 0;
}

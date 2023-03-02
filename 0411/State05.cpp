#include<iostream>
using namespace std;

int n;
int Func(int, int);
int main()
{
	cin >> n;
	cout << Func(0, n);
}
int Func(int a, int b)
{
	if (a == n && b == 0) return 1;
	if (a > n || b < 0) return 0;
	return Func(a + 1, b - 1) + Func(a + 1, b - 2) + Func(a + 2, b - 1) + Func(a + 2, b - 2);
}
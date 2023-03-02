#include<iostream>
using namespace std;
int n;

int Func(int, int);
int main()
{
	cin >> n;
	cout << Func(0, 0);
}
int Func(int a, int b)
{
#pragma region ½Ãµµ
	/*if (a > n) return 0;
	if (a == n)cnt++;
	for (int i = -1; i <= 3; i++)
	{
		if (b > 0 && i == -1) continue;
		if (i == 0) continue;
		if (i == -1)
			b++;
		Func(a + i, b);
	}*/
#pragma endregion
	if (a > n || b > 1) return 0;
	if (a == n) return 1;
	return Func(a + 1, b) + Func(a + 2, b) + Func(a + 3, b) + (a>0 ? Func(a-1,b+1): 0);
}

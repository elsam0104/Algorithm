#include<iostream>
using namespace std;

	int n;
	int cnt = 0;

/// <summary>
/// 목표상태는 n,1
/// </summary>
/// <param name="n">오른 계단 수</param>
/// <param name="b">소수 칸을 밟았는지</param>
/// <returns></returns>
int Func(int,int);
bool Sosu(int a);
int main()
{
	cin >> n;
	Func(0, 0);
	cout << cnt;
}
bool Sosu(int a)
{
	bool isSosu = true;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			isSosu = false;
	}
	if (isSosu == true)
		return true;
	else
		return false;
}
int Func(int a, int b)
{
	if (a>=2&&Sosu(a))
	{
		b++;
	}
	if (a == n && b == 1) cnt++;
	if (a > n || b > 1)return 0;
	for (int i = 1; i <= 3; i++)
	{
		Func(a + i, b);
	}
}
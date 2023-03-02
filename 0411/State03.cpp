#include<iostream>
using namespace std;
int n, cnt = 0;
/// <summary>
/// 기대 결과
/// (n,?)
/// </summary>
/// <param name="a">오른 계단의 수</param>
/// <param name="c">전에 한번에 오른 계단의 갯수</param>
/// <returns></returns>
int Func(int,int,int);
int main()
{
	cin >> n;
	Func(0, 0, 0);
	cout << cnt;
}

int Func(int a,int b, int c)
{
	if (a> n) return 0;
	if (a == n)cnt++;
	
	if (b == 1)
	{
		if (c < 3) Func(a + 1, 1, c + 1);
		Func(a + 2, 2, 1);
	}
	else
	{
		if (c < 3)Func(a + 2, 2, c + 1);
		Func(a + 1, 1, 1);
	}
}

#include<iostream>
using namespace std;
int n, cnt = 0;
/// <summary>
/// ��� ���
/// (n,?)
/// </summary>
/// <param name="a">���� ����� ��</param>
/// <param name="c">���� �ѹ��� ���� ����� ����</param>
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

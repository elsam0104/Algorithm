#include<iostream>
using namespace std;
int n;
int cnt;
bool isSosu = true;
void S(int a,int b)
{
	if (a == n)
		cnt++;
	if (a > n)
		return;
	if (b != 0)
	{
		for (int i = 1; i < a; i++)
		{
			if (a % i == 0)
			{
				isSosu = false;
			}
		}
	}
	if (isSosu == true)
		return;
	for (int i = 1; i <= 3; i++)
	{
		if (b == 0 && i > 1)
			b = i;
		S(a+i, b);
	}
}
int main()
{
	cin >> n;
	S(0, 0);
	cout << cnt;
}
#include<iostream>
using namespace std;
int a[9][9], cnt = 0;
void dfs(int x, int y)
{
	if (x + 1 < 9 && a[x + 1][y] == 1)
	{
		a[x + 1][y] = 3;
		cnt++;
	}
	if (x - 1 >= 0 && a[x - 1][y] == 1)
	{
		a[x + 1][y] = 3;
		cnt++;
	}
	if (y + 1 < 9 && a[x][y + 1] == 1)
	{
		a[x + 1][y] = 3;
		cnt++;
	}
	if (y - 1 >= 0 && a[x][y - 1] == 1)
	{
		a[x + 1][y] = 3;
		cnt++;
	}
	if (y - 1 >= 0 && x - 1 >= 0 && a[x - 1][y - 1] == 1)
	{
		a[x + 1][y] = 3;
		cnt++;
	}
	if (y + 1 < 9 && x + 1 < 9 && a[x + 1][y + 1] == 1)
	{
		a[x + 1][y] = 3;
		cnt++;
	}
	if (y - 1 >= 0 && x + 1 < 9 && a[x + 1][y - 1] == 1)
	{
		a[x + 1][y] = 3;
		cnt++;
	}
	if (y + 1 < 9 && x - 1 >= 0 && a[x - 1][y + 1] == 1)
	{
		a[x + 1][y] = 3;
		cnt++;
	}

}
int main()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> a[i][j];
		}
	}
	int x, y;
	cin >> x >> y;
	if (a[x-1][y-1] == 1)
	{
		cout << -1;
	}
	else
	{
		dfs(x-1,y-1);
		cout << cnt;
	}

}
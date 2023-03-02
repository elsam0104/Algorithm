#include<iostream>
using namespace std;
char a[10][10];
void dfs(int y, int x)
{
	if (a[y][x] == '*') return;

	if (a[y][x] == '_')
	{
		a[y][x] = '*';

		/*if (y >= 0 && y < 10 && x >= 0 && x < 10)
		{*/
		if (y + 1 < 10)
			dfs(y + 1, x);
		if (y - 1 >= 0)
			dfs(y - 1, x);
		if (x + 1 < 10)
			dfs(y, x + 1);
		if (x - 1 >= 0)
			dfs(y, x - 1);

	}
	//}
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> a[i][j];
		}
	}
	int x, y;
	cin >> x >> y;
	dfs(y, x);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
}
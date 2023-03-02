#include<iostream>
int a[20][20];
int dfs(int color, int cnt, int dir, int i, int j)
{
	//right
	if (dir == 1)
	{
		while (color == a[i][j + 1])
		{
			j++;
			cnt++;
		}
		return cnt == 5 ? 1 : 0;
	}
	//right down
	if (dir == 2)
	{
		while (color == a[i + 1][j + 1])
		{
			j++;
			i++;
			cnt++;
		}
		return cnt == 5 ? 1 : 0;
	}
	//down
	if (dir == 3)
	{
		while (color == a[i + 1][j])
		{
			i++;
			cnt++;
		}
		return cnt == 5 ? 1 : 0;
	}
	//right up
	if (dir == 4)
	{
		while (color == a[i - 1][j + 1])
		{
			i--;
			j++;
			cnt++;
		}
		return cnt == 5 ? 1 : 0;
	}
}
using namespace std;
int main()
{
	int result = 0;
	int I = 0, J = 0;
	bool isAnswer = false;
	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			if (a[i][j] != 0)
			{
				//왼쪽이랑 다름. 오른쪽으로 감
				if (a[i][j - 1] != a[i][j] && dfs(a[i][j], 1, 1, i, j) == 1)
				{
					cout << a[i][j] << endl;
					cout << i << " " << j;
					return 0;
				}
				//왼쪽 위랑 다름. 오른쪽 아래로 감
				if (a[i - 1][j - 1] != a[i][j] && dfs(a[i][j], 1, 2, i, j) == 1)
				{
					cout << a[i][j] << endl;
					cout << i << " " << j;
					return 0;
				}
				//위랑 다름. 아래로 감
				if (a[i - 1][j] != a[i][j] && dfs(a[i][j], 1, 3, i, j) == 1)
				{
					cout << a[i][j] << endl;
					cout << i << " " << j;
					return 0;
				}
				//왼쪽 아래랑 다름. 오른쪽 위로 감 
				if (a[i + 1][j - 1] != a[i][j] && dfs(a[i][j], 1, 4, i, j) == 1)
				{
					I = i;
					J = j;
					isAnswer = true;
				}
			}
		}
	}
	if (isAnswer)
	{
		cout << a[I][J] << endl;
		cout << I << " " << J;
	}
	else
		cout << 0;
}
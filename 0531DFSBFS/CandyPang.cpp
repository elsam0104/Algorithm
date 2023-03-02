#include<iostream>
using namespace std;
int a[9][9], cnt, temp;
void dfs(int y, int x, int color)
{
	if (a[y][x] == -1)return;

	if (a[y][x] == color)
	{
		a[y][x] = -1;
		temp++;
		//상하좌우
		dfs(y - 1, x, color);
		dfs(y + 1, x, color);
		dfs(y, x - 1, color);
		dfs(y, x + 1, color);
	}
}
int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
				dfs(i, j, a[i][j]);
				if (temp >= 3)
					cnt++;
				temp = 0;
		}
	}

	cout << cnt;
}
#pragma region MyAnswer
/*
#include<iostream>
using namespace std;
int map[8][8];
bool visit[8][8];
int loopX[4] = { 0,1, 0,-1 }; // for문 돌기 쉬우려고
int loopY[4] = { 1,0, -1,0 };
int answer = 0, cnt = 0;
void dfs(int x, int y)
{
	if (visit[x][y]) return;
	visit[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		int curX = x + loopX[i];
		int curY = y + loopY[i];

		if (curX <= 6 && curX >= 0 && curY <= 6 && curY >= 0)
		{
			if (!visit[curX][curY] && map[curX][curY] == map[x][y])
			{
				if (cnt == 3)
				{
					answer++;
					cnt = 0;
				}
				else
				{
					cnt++;
				}

				dfs(curX, curY);
			}
		}
	}
}
int main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			int input;
			cin >> input;
			map[i][j] = input;
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cnt = 0;
			dfs(i, j);
		}
	}
	cout << answer;
}
*/
#pragma endregion
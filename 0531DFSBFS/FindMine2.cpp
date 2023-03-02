#include<iostream>
using namespace std;
int map[10][10], visit[10][10], mine[10][10];

int dir[8][2] = { {1,0}, {0,1} ,{-1,0} ,{0,-1} ,{-1,1}, {1 ,-1}, {1,1} ,{ -1 ,-1} };
void dfs(int y, int x)
{
	/*���� 8�������� Ž���� ����ã�� 1 ó�� �����*/
	/*���� ���� 2,2 ���� �����ؼ� 0�� �ƴҋ����� 1�̸� ������*/

	/*0�� �ƴҶ����� Ž�� 8��������
	  Ž���� ĭ�� ���ڸ� ���ڷ� ���
	   Ž������ �������� ����ٷ� ���*/
	visit[y][x] = 1;
	if (mine[y][x] != 0)return;
	for (int i = 0; i < 8; i++)
	{
		int nexty = y + dir[i][0];
		int nextx = x + dir[i][1];
		if (nexty < 1 || nexty>9 || nextx < 1 || nextx>9 || visit[nexty][nextx])
			continue;
		dfs(nexty, nextx);
	}
}
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			mine[i][j] = map[i - 1][j - 1] + map[i][j - 1] + map[i - 1][j] + map[i + 1][j + 1] + map[i + 1][j] + map[i][j + 1] + map[i - 1][j + 1] + map[i + 1][j - 1];
		}

	}
	int r, c;
	cin >> r >> c;
	dfs(r, c);

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (map[r][c] == 1)
			{
				if (i == r && j == c)
					cout << "-1 ";
				else
					cout << "_ ";
				continue;
			}
			if (visit[i][j] == 1)
				cout << mine[i][j] << " ";
			else
				cout << "_ ";
		}
		cout << endl;
	}
}
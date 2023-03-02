#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int n, k;
int s, x, y;
int arr[200][200]; //���������� 0���� �ʱ�ȭ
int dir[4][2]{ {-1,0},{0,-1}, {1,0} ,{0,1} };
class Virus
{
public:
	Virus(int x, int y, int type, int time)
	{
		m_posx = x;
		m_posy = y;
		m_type = type;
		m_time = time;
	}
	bool operator<(Virus& other)
	{
		return m_type < other.m_type;
	}
public:
	int m_posx;
	int m_posy;
	int m_type;
	int m_time;
};
vector<Virus> v;
int main()
{
	//n ����� ũ�� k ���̷��� ��ȣ
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] != 0)
			{
				v.push_back(Virus(i, j, arr[i][j], 0));
			}
		}
	}
	sort(v.begin(), v.end());
	//s �ð�(��) x �� y ��
	cin >> s >> x >> y;
	queue<Virus> q;
	for (int i = 0; i < v.size(); i++)
	{
		q.push(v[i]);
	}
	while (!q.empty())
	{
		Virus vir = q.front();
		q.pop();
		if (vir.m_time == s) break;
		for (int i = 0; i < 4; i++)
		{
			int nx = vir.m_posx + dir[i][0];
			int ny = vir.m_posy + dir[i][1];
			//���� ��ġ�� �� �� ���� üũ
			if (nx >= 0 && nx < n && ny >= 0 && ny < n)
			{
				if (arr[nx][ny] == 0)
				{
					arr[nx][ny] = vir.m_type;
					q.push(Virus(nx, ny, vir.m_type, vir.m_time + 1));
				}
			}
		}
	}
	cout << arr[x - 1][y - 1];
}










//void bfs(int y, int x)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		int cury = dir[i][0];
//		int curx = dir[i][1];
//		if (arr[cury][curx] != 0)
//		{
//			dir[cury][curx] = dir[y][x];
//		}
//	}
//}
//int main()
//{
//	//n ����� ũ�� k ���̷��� ��ȣ
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//			if (arr[i][j] != 0)
//				virus.push_back(arr[i][j]);
//		}
//	}
//	sort(virus.begin(), virus.end());
//	int temp = virus[0];
//	for (int i = 1; i < virus.size(); i++)
//	{
//		if (virus[i] == temp)
//		{
//			virus[i]
//		}
//		else
//		{
//			temp++;
//		}
//	}
//	//s �ð�(��) x �� y ��
//	cin >> s >> x >> y;
//	queue<int> q;
//	q.push(virus[0]);
//	while (!q.empty())
//	{
//		for (int i = 0; i < virus.size(); i++)
//		{
//
//		}
//		//���� ����
//
//		//���� ��
//		
//		//pop
//		
//		//���� Ž��
//		
//		//������ q�� ����
//	}
//	cout<<arr[y][x];
//}
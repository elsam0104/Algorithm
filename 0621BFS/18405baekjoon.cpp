#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int n, k;
int s, x, y;
int arr[200][200]; //전역임으로 0으로 초기화
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
	//n 시험관 크기 k 바이러스 번호
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
	//s 시간(초) x 행 y 열
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
			//다음 위치로 갈 수 있지 체크
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
//	//n 시험관 크기 k 바이러스 번호
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
//	//s 시간(초) x 행 y 열
//	cin >> s >> x >> y;
//	queue<int> q;
//	q.push(virus[0]);
//	while (!q.empty())
//	{
//		for (int i = 0; i < virus.size(); i++)
//		{
//
//		}
//		//값을 넣음
//
//		//값을 뺌
//		
//		//pop
//		
//		//다음 탐색
//		
//		//다음꺼 q에 넣음
//	}
//	cout<<arr[y][x];
//}
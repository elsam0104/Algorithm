#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>v[8];
queue<int> q;
bool visit[8];
void bfs(int x)
{
	q.push(x);
	visit[x] = true;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (int i = 0; i < v[cur].size(); i++)
		{
			int next = v[cur][i];
			if (!visit[next])
			{
				q.push(next);]
				visit[next] = true;
			}
		}
	}
}
int main()
{

	//     1
	//  2     3
	// 4  5  6  7

	//1과 2 연결
	v[1].push_back(2);
	v[2].push_back(1);

	//1과 3 연결
	v[1].push_back(3);
	v[3].push_back(1);

	v[2].push_back(3);
	v[3].push_back(2);

	v[4].push_back(2);
	v[2].push_back(4);

	v[5].push_back(2);
	v[2].push_back(5);

	v[3].push_back(6);
	v[6].push_back(3);

	v[3].push_back(7);
	v[7].push_back(3);

	v[4].push_back(5);
	v[5].push_back(4);

	v[7].push_back(6);
	v[6].push_back(7);

	bfs(1);
}
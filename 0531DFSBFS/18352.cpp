#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> v[300001];
//n: 도시개수 m:도로개수 k: 거리정보 x: 출발도시번호
int n, m, k, x;

int main()
{
	cin >> n >> m >> k >> x;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
	}
	queue<int> q;
	vector<int> idx;
	q.push(x);
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		for (int i = 0; v[cur].size(); i++)
		{
			int next = v[cur][i];
			//방문을 했다면 + 1 하면 안 됨. (같은거리에 있음)
			//방문을 안 했다면 거리가 +1 해야함.
			idx[next] = idx[cur] + 1;
			q.push(next);
		}
	}
}
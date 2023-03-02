#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int>v[1001];
queue<int> q;
bool visit[1001];
void dfs(int x)
{
	if (visit[x]) return;
	visit[x] = true;
	cout << x << " ";

	for (long unsigned int i = 0; i < v[x].size(); i++)
	{
		int next = v[x][i];
		dfs(next);
	}
}
void bfs(int x)
{
	q.push(x);
	visit[x] = true;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		for (long unsigned int i = 0; i < v[cur].size(); i++)
		{
			int next = v[cur][i];
			if (!visit[next])
			{
				q.push(next);
				visit[next] = true;
			}
		}
	}
}
int main()
{
	int n, m, V;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		v->push_back(i);
	}
	cin >> m >> V;
	for (int i = 0; i < m; i++)
	{
		int temp, data;
		cin >> temp >> data;
		v[temp].push_back(data);
		v[data].push_back(temp);
	}
	for (int i = 1; i <= n; i++)
		sort(v[i].begin(), v[i].end());
	dfs(V);
	cout << endl;
	for (int i = 1; i < 1001; i++)
		visit[i] = false;
	bfs(V);
}
#include<vector>
#include<iostream>
#include<queue>
using namespace std;
//도시 개수, 도로 개수, 거리 정보, 출발 도시의 번호
int n, m, k, x;

vector<int> v[300001];
//거리 저장할 백터
vector<int> dis(300001, -1);

int main()
{
	cin >> n >> m >> k >> x;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
	}
	dis[x] = 0; //자기 자신부터로의 거리는 0
	queue<int>q;
	q.push(x);
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		//현재 도시에서 연결되어 이동할 수 있는 모든 도시 탐방
		for (int i = 0; i < v[cur].size(); i++)
		{
			int next = v[cur][i];
			//방문하지 않은 도시라면
			if (dis[next] == -1)
			{
				dis[next] = dis[cur] + 1;
				q.push(next);
			}
		}
	}
	bool isAnswerHave = false;
	for (int i = 1; i <= n; i++)
	{
		if (dis[i] == -1)
			continue;
		if (dis[i] == k)
		{
			isAnswerHave = true;
			cout << i << "\n";
		}
	}
	if (!isAnswerHave)
	{
		cout << -1;
	}
}
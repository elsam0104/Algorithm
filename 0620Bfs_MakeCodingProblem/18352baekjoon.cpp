#include<vector>
#include<iostream>
#include<queue>
using namespace std;
//���� ����, ���� ����, �Ÿ� ����, ��� ������ ��ȣ
int n, m, k, x;

vector<int> v[300001];
//�Ÿ� ������ ����
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
	dis[x] = 0; //�ڱ� �ڽź��ͷ��� �Ÿ��� 0
	queue<int>q;
	q.push(x);
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		//���� ���ÿ��� ����Ǿ� �̵��� �� �ִ� ��� ���� Ž��
		for (int i = 0; i < v[cur].size(); i++)
		{
			int next = v[cur][i];
			//�湮���� ���� ���ö��
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
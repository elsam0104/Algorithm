#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> v[300001];
//n: ���ð��� m:���ΰ��� k: �Ÿ����� x: ��ߵ��ù�ȣ
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
			//�湮�� �ߴٸ� + 1 �ϸ� �� ��. (�����Ÿ��� ����)
			//�湮�� �� �ߴٸ� �Ÿ��� +1 �ؾ���.
			idx[next] = idx[cur] + 1;
			q.push(next);
		}
	}
}
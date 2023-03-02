#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>v[8];
bool visit[8];
//dfs - ���� �켱 Ž�� 

//���
//void dfs(int x)
//{
//	if (visit[x]) return;
//	visit[x] = true;
//	cout << x << " ";
//	for (int i = 0; i < v[x].size(); i++)
//	{
//		int next = v[x][i];
//		dfs(next);
//	}
//}

//����
stack<int> s;
void dfs(int x)
{
	s.push(x);
	visit[x] = true;
	cout << x << " ";
	while (!s.empty())
	{
		int cur = s.top();
		s.pop();
		for (int i = 0; i < v[cur].size(); i++)
		{
			int next = v[cur][i];
			if (!visit[next])
			{
				cout << next << " ";
				visit[next] = true;
				s.push(cur);
				s.push(next);
				break;
			}
		}
	}
}

int main()
{

	//     1
	//  2     3
	// 4  5  6  7

	//1�� 2 ����
	v[1].push_back(2);
	v[2].push_back(1);

	//1�� 3 ����
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

	dfs(1);
}
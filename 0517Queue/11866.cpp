#include<iostream>
#include<deque>
#include<queue>
using namespace std;
int main()
{
	queue<int> q;
	int n, k;

	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (!q.empty())
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			cout << q.front() << endl;
			q.pop();
		}
		cout <<endl<< q.front();
		q.pop();
		if (!q.empty())
		{
			cout << ", ";
		}
	}
	cout << ">";
	/*deque<int> q;
	int N, k;
	cin >> N >> k;
	for (int i = 1; i <= N; i++)
	{
		q.push_back(i);
	}
	cout << "<";
	for (int i = 1; i <= N; i++)
	{
		int dead = k * i;
		if (dead > N)
		{
			dead = dead / k;
		}
		if (i != N)
		{
			cout << dead << ", ";
		}
		else
		{
			cout << dead << ">";
		}
		q.erase(q.begin() + dead);
	}*/

}
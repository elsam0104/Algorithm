#include<iostream>
#include<queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	queue<int> q;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string inputStr;
		cin >> inputStr;
		if (inputStr == "push")
		{
			int value = 0;
			cin >> value;
			q.push(value);
		}
		else if (inputStr == "pop")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (inputStr == "size")
		{
			cout << q.size() << '\n';
		}
		else if (inputStr == "empty")
		{
			cout << (int)q.empty() << '\n';
		}
		else if (inputStr == "front")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (inputStr == "back")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}
}
#include<iostream>
#include<deque>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	deque<int> d;
	int length;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		string s;
		cin >> s;
		if (s == "push_front")
		{
			int num;
			cin >> num;
			d.push_front(num);
		}
		else if (s == "push_back")
		{
			int num;
			cin >> num;
			d.push_back(num);
		}
		else if (s == "pop_front")
		{
			if (d.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout<<d.front() << '\n';
				d.pop_front();
			}
		}
		else if (s == "pop_back")
		{
			if (d.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout<<d.back() << '\n';
				d.pop_back();
			}
		}
		else if (s == "size")
		{
			cout << d.size() << '\n';
		}
		else if (s == "empty")
		{
			cout << (int)d.empty() << '\n';
		}
		else if (s == "front")
		{
			if (d.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << d.front() << '\n';
			}
		}
		else if (s == "back")
		{
			if (d.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << d.back() << '\n';
			}
		}
	}
}
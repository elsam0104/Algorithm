#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> q;
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		q.push(a);
	}
	for (int i = q.size() - 1; i > 0; i--)
	{
		cout << q.top() << " => ";
		q.pop();
	}
	cout << q.top();
}
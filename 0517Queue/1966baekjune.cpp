#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		int amount, index,cnt = 0;
		cin >> amount >> index;
		for (int i = 0; i < amount; i++)
		{
			int print;
			cin >> print;
			q.push(make_pair(i,print));
			pq.push(print);
		}
		while (!q.empty())
		{
			//∏« æ’≤® √ﬂ√‚
			int mindex = q.front().first;
			int data = q.front().second;
			q.pop();
			if (data == pq.top())
			{
				pq.pop();
				cnt++;
				if (mindex == index)
				{
					cout << cnt<<endl;
					break;
				}
			}
			else
			{
				q.push({ mindex,data });
			}
		}
	}
}
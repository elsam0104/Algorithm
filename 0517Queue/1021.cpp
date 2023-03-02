#include<iostream>
#include<deque>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	deque<int> d;
	deque<int> findNum;
	// 집어넣어
	for (int i = 1; i <= n; i++)
	{
		d.push_back(i);
	}
	for (int i = 0; i < m; i++)
	{
		int data;
		cin >> data;
		findNum.push_back(data);
	}

	int cnt = 0;
	while (!findNum.empty())
	{
		int curIndex = 0;
		//일단 data를 돌아서 찾는 수를찾아
		for (int i = 0; i < n; i++)
		{
			if (d[i] == findNum.front())
			{
				curIndex = i;
				break;
			}
		}
		if (curIndex == 0)
			//예외처리
		{
			d.pop_front();
			findNum.pop_front();
		}
		else
		{
			//거리를 비교해
			int compare = d.size() - curIndex;
			if (curIndex > compare)
				//만약 오른쪽에 치우쳐 있다면
			{
				d.push_front(d.back());
				d.pop_back();
				cnt++;
			}
			else
				//만약 왼쪽에 치우쳐 있다면
			{
				d.push_back(d.front());
				d.pop_front();
				cnt++;
			}
			if (d.front() == findNum.front())
			{
				findNum.pop_front();
				d.pop_front();
			}
		}
	}
	cout << cnt;
}
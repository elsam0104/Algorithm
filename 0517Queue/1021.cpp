#include<iostream>
#include<deque>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	deque<int> d;
	deque<int> findNum;
	// ����־�
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
		//�ϴ� data�� ���Ƽ� ã�� ����ã��
		for (int i = 0; i < n; i++)
		{
			if (d[i] == findNum.front())
			{
				curIndex = i;
				break;
			}
		}
		if (curIndex == 0)
			//����ó��
		{
			d.pop_front();
			findNum.pop_front();
		}
		else
		{
			//�Ÿ��� ����
			int compare = d.size() - curIndex;
			if (curIndex > compare)
				//���� �����ʿ� ġ���� �ִٸ�
			{
				d.push_front(d.back());
				d.pop_back();
				cnt++;
			}
			else
				//���� ���ʿ� ġ���� �ִٸ�
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
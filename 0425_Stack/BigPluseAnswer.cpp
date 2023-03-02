#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	stack<char> s1;//계산
	stack<char> s2;//계산
	string a;//입력받기 위함
	string b;//입력받기 위함
	stack<int> ans;//답
	
	cin >> a;
	cin >> b;
	for (int i = 0; i < a.size(); i++)
		s1.push(a[i]);
	for (int i = 0; i < b.size(); i++)
		s2.push(b[i]);
	//s1과 s2 중 긴 길이가 s1로 가게
	if (s1.size() < s2.size())
		swap(s1, s2);
	int extra = 0;
	while (!s1.empty() && !s2.empty())
	{
		int x1 = s1.top() - '0';
		int x2 = s2.top() - '0';
		ans.push((x1+x2+extra)%10);
		extra = (x1 + x2 + extra) / 10;
		s1.pop();
		s2.pop();
	}
	//하나가 비어졌다면 나머지 처리
	//올림 ㅇ
	if (extra != 0)//123+99
	{
		if (s1.empty())//23+99
		{
			ans.push(extra);
			extra = 0;
		}
		else
		{
			while (!s1.empty())
			{
				int x = s1.top() - 48;
				ans.push((x + extra) % 10);
				extra = (x + extra) / 10;
				s1.pop();
			}
		}
	}
	//올림 ㄴ
	else
	{
		while (!s1.empty())//123+45
		{
			int x = s1.top() - 48;
			ans.push((x + extra) % 10);
			extra = (x + extra) / 10;
			s1.pop();
		}
	}
	if (extra != 0)//153+58
	{
		ans.push(extra);
	}
	while (!ans.empty())
	{
		cout << ans.top();
		ans.pop();
	}
}
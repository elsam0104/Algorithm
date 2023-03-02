#include<iostream>
#include<stack>
using namespace std;
int n;
int  input;
stack < pair<int, int >> s;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		while (!s.empty())
		{
			//������ top�� input���� ũ�ٸ�
			if (s.top().second > input)
			{
				cout << s.top().first << " ";
				break;
			}
			s.pop();
		}
		if (s.empty()) cout << "0 ";
		s.push(make_pair(i, input));
	}

}
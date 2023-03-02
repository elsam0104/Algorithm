#include<iostream>
#include<deque>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N;
	cin >> N;
	for (int j = 0; j < N; j++)
	{
		string s, vs;
		int n;
		deque<int>d;
		bool isError = false;
		cin >> s;
		cin >> n;
		cin >> vs;
		int rNum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'R')
				rNum++;
		}
		string result = "";
		for (int i = 1; i < vs.length(); i++)
		{
			if (vs[i] >= '0' && vs[i] <= '9')
			{
				result += vs[i];
			}
			else if(vs[i] == ',' || i == vs.length()-1)
			{
				d.push_back(stoi(result));
				result = "";
			}
		}
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'D')
			{
				if (d.empty())
				{
					isError = true;
					break;
				}
				else
				{
					if (rNum % 2 == 0)//RÀÌ µç °¹¼ö°¡ Â¦¼ö¸é
					{
						d.pop_front();
					}
					else
					{
						d.pop_back();
					}

				}
			}
		}
		if (rNum % 2 != 0)
			reverse(d.begin(), d.end());
		if (isError)
		{
			cout << "error" << endl;
		}
		else
		{
			cout << "[";
			while(!d.empty())
			{
				cout << d.front();
				if (d.front() != d.back())
				{
					cout << ",";
				}
				d.pop_front();
			}
			cout << "]" << endl;
		}
	}
}

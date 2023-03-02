#include<iostream>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<pair<int, int>> v;
	long long int answerNum, inputNum, front, end, half = 0;
	long long int input, answer = 0;
	bool isdonhave = true;
	cin >> inputNum;
	for (int i = 0; i < inputNum; i++)
	{
		cin >> input;
		v.push_back(make_pair(input, i));
	}
	front = 0;
	end = v.size();
	cin >> answerNum;
	for (int i = 0; i < answerNum; i++)
	{
		half = (end + front) / 2;
		cin >> answer;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[half].first == answer)
			{
				cout << v[half].second << " ";
				isdonhave = false;
				break;
			}
			else if (v[half].first > answer)
			{
				front = half + 1;
			}
			else if (v[half].first < answer)
			{
				end = half - 1;
			}
		}
		if (isdonhave)
		{
			cout << -1 << " ";
		}
	}
}
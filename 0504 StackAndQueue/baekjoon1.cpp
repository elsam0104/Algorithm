#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<long long int> index;
	long long int indexNum, answerNum, low = 0, end = 0, mid = 0, num, answer;
	bool ishave = false;
	cin >> indexNum;

	for (int i = 0; i < indexNum; i++)
	{
		cin >> num;
		index.push_back(num);
	}
	sort(index.begin(), index.end());
	cin >> answerNum;
	for (int i = 0; i < answerNum; i++)
	{
		end = index.size() - 1;
		low = 0;
		cin >> answer;
		ishave = false;
		while (low <= end)
		{
			mid = (end + low) / 2;
			if (index[mid] == answer)
			{
				cout << 1 << "\n";
				ishave = true;
				break;
			}
			else if (index[mid] > answer)
				end = mid - 1;
			else if (index[mid] < answer)
				low = mid + 1;
		}
		if (ishave == false)
			cout << 0 << "\n";
	}
}
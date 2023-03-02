#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int n, m, vn, answer = 0, iMax = 0;
	long long int low, high, mid, cnt;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		v.push_back(vn);
		if (iMax < v[i]) iMax = v[i];
	}
	sort(v.begin(), v.end());
	low = 1;
	high = iMax;
	while (low <= high)
	{
		mid = (low + high) / 2;
		cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (v[i] > mid) 
				cnt += v[i] -mid;
		}
		if (cnt >= m)
		{
			answer = mid;
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << answer;
}
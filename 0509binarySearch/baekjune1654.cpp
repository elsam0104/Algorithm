#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int k, n, iMax, vn, answer;
vector<int> v;
long long int low, high, mid;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	cin >> k >> n;
	for (int i = 0; i < k; i++)
	{
		cin >> vn;
		v.push_back(vn);
		if (iMax < v[i]) iMax = v[i];
	}
	low = 1;
	high = iMax;
	while (low <= high)
	{
		//mid = (low + high) / 2;
		/*if (v[mid] == n1)
		{	}
		else if (v[mid] > n1) high = mid - 1;
		else low = mid + 1;*/
		mid = (low + high) / 2;
		int cnt = 0;
		for (int i = 0; i < k; i++)
			cnt += v[i] / mid;
		//이분탐색 원리
		//크면? 작으면?
		if (cnt >= n)
		{
			low = mid + 1;

			if (answer < mid)
			{
				answer = mid;
			}
		}
		else //cnt < n  == 덜 짜름
		{
			high = mid - 1;
		}
	}
	cout << answer;
}
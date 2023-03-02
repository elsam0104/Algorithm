#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	int low = 1;
	int high = k;
	int result = 0;
	int cnt, mid;
	while (low <= high)
	{
		cnt = 0;
		mid = (low + high) / 2;
		for (int i = 1; i <= n; i++)
		{
			cnt += min(mid / i, n);
		}
		//cnt가 인덱스보다 작다면
		if (cnt < k)
		{
			low = mid + 1;
		}
		//cnt가 k 보다 크거나 같으면
		else
		{
			result = mid;
			high = mid - 1;
		}
	}
	cout << result;
}
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
		//cnt�� �ε������� �۴ٸ�
		if (cnt < k)
		{
			low = mid + 1;
		}
		//cnt�� k ���� ũ�ų� ������
		else
		{
			result = mid;
			high = mid - 1;
		}
	}
	cout << result;
}
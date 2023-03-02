#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, vn;
vector<pair<int,int>> v;
int BinaryS(int n1)
{
	int low = 0;
	int high = n - 1;
	int mid = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (v[mid].second == n1) return v[mid].first;
		else if (v[mid].second > n1) high = mid - 1;
		else low = mid +1;
	}
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> vn;
		v.push_back(make_pair(i+1, vn));
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> vn;
		cout << BinaryS(vn) << " ";
	}
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);
	vector<int> v;
	long long int k;
	long long int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		long long int c = 0;
		cin >> c;
		v.push_back(c);
	}
	sort(v.begin(), v.end());
	long long int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> k;
		long long int ans = upper_bound(v.begin(), v.end(), k) - lower_bound(v.begin(), v.end(), k);
		cout << ans<<" ";
	}
}
	//for (int i = 0; i < m; i++)
	//{
	//	cin >> k;
	//	low = 0;
	//	high = v.size();
	//	while (low < high)
	//	{
	//		mid = (low + high) / 2;
	//		if (v[mid].first == k)
	//			v[i].second++;
	//		if (v[mid].first >= k) //lowerbound
	//		//if (v[mid] > k)//upperbound
	//		{
	//			high = mid;
	//		}
	//		else
	//		{
	//			low = mid + 1;
	//		}
	//	}
	//}
	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << v[i].second << " ";
	//}
	//cout << 1 + high;
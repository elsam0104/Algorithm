#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long int k, n, m;
	vector<int> v;
	vector<long int> answer;
	cin >> n;
	v.push_back(-1);
	for (int i = 0; i < n; i++)
	{
		long int c = 0;
		cin >> c;
		v.push_back(c);
	}
	sort(v.begin(), v.end());
	m = v.size();
	for (int i = 1; i < m; i++)
	{
		k = v[i];
		if (k != v[i - 1])
		{
			long int a = upper_bound(v.begin(), v.end(), k) - lower_bound(v.begin(), v.end(), k);
			answer.push_back(a + 1);

		}

	}
	cout << answer.size();
}

	//int n, vn, cnt=0;
	//vector<int> v;
	//cin >> n;
	//v.push_back(-1);
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> vn;
	//	if (vn > v.back())
	//	{
	//		v.push_back(vn);
	//		cnt++;
	//	}
	//	else
	//	{
	//		vector<int>::iterator low =
	//		lower_bound(v.begin(), v.end(), vn);
	//		*low = vn;
	//	}
	//}
	//cout<< cnt;
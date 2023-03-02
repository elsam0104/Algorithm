#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, add, sub, mul, diva;
int minval = 1e9;  //10^9
int maxval = -1e9; //-(10^9)
vector<int>v;

void dfs(int cnt, int cur) {

	if (cnt == n)
	{
		minval = min(minval, cur);
		maxval = max(maxval, cur);
		return;
	}
	else {
		if (add > 0) {
			add -= 1;
			dfs(cnt + 1, cur + v[cnt]);
			add += 1;
		}
		if (sub > 0)
		{
			sub -= 1;
			dfs(cnt + 1, cur - v[cnt]);
			sub += 1;
		}
		if (mul > 0)
		{
			mul -= 1;
			dfs(cnt + 1, cur * v[cnt]);
			mul += 1;
		}
		if (diva > 0)
		{
			diva -= 1;
			dfs(cnt + 1, cur / v[cnt]);
			diva += 1;
		}
	}

}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		int vn;
		cin >> vn;
		v.push_back(vn);
	}

	cin >> add >> sub >> mul >> diva;
	dfs(1, v[0]);

	cout << maxval << endl << minval;

	return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1, v2;
	int input1, input2;
	int input;
	cin >> input1 >> input2;

	for (int i = 0; i < input1; i++)
	{
		cin >> input;
		v1.resize(i + 1);
		v1.pop_back();
		v1.push_back(input);
	}
	for (int j = 0; j < input2; j++)
	{
		cin >> input;
		v2.resize(j + 1);
		v2.pop_back();
		v2.push_back(input);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	if (v1.front() > v2.front())
	{
		v1.swap(v2);
	}
	if (v2.front() <= v1.back())
	{
		cout << -1;
		return 0;
	}
	//float vv = (v2.front() - v1.back())/ 2.0f;
	
	if (v2.front() - v1.back() <1)
	{
		cout << -1;
		return 0;
	}
	int count = 0;
	for (int i = v1.back(); i < v2.front(); i++)
	{
		count++;
	}
	cout << count;
}
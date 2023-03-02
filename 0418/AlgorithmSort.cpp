#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(int a, int b)
{
	return a > b;
}
int main()
{
	int arr[5] = { 3,4,5,1,2 };
	vector<int> v = { 3,4,5,1,2 };
	sort(arr, arr + 5);
	//sort(v.begin(), v.end(),compare);
	sort(v.begin(), v.end(),greater<int>());
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << endl;
	for (auto& e : v)
		cout << e << " ";
}
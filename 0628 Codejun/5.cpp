#include<iostream>
#include<vector>
#include <cctype>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>  v;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '0')
		{
			/*vector<int> vec;
			for (int j = 0; j < v.size(); j++)
			{
				vec.push_back(v[j]);
			}*/
			reverse(v.begin(), v.end());
			/*for (int j = 0; j < v.size(); j++)
			{
				v[j] = vec[j];
			}*/
		}
		else
		{
			int b = 0;
			bool isS = false;
			if (isdigit(str[i]))//¼ýÀÚ
			{
				b = str[i];
				int temp = b - '0';
				for (int k = 2; k < temp; k++)
				{
					if (temp % k == 0)
					{
						isS = true;
					}
				}
			}
			else
			{
				char c = str[i];
				c = toupper(c);
				b = c;
			}
			if (v.empty() || b != v.back())
			{
				if (isS == false)
					v.push_back(b);
			}
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << (char)v[i];
	}
}
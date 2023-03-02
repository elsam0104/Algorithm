#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() < b.length())
		return true;
	else if (a.length() == b.length())
		if (a < b)	return true;

	return false;
}
vector<int> solution(vector<string> words, vector<string> queries)
{
	vector<int> answer;
	sort(words.begin(), words.end(), compare);

	vector<string> r = words;
	//거꾸로 정렬
	for (int i = 0; i < words.size(); i++)
	{
		reverse(r[i].begin(), r[i].end());
	}

	for (int i = 0; i < queries.size(); i++)
	{
		string query = queries[i];
		int idx = 0;
		idx = query.find('?') - 1;
		if (query[0] == '?')
		{
			for (int j = 0; j < idx; j++)
			{
				query[j] = 'a';
			}
			int low = lower_bound(words.begin(), words.end(), query) - words.begin();
			for (int j = 0; j < idx; j++)
			{
				query[j] = 'z';
			}
			int high = upper_bound(words.begin(), words.end(), query) - words.begin();// =0이기 때문에 int형 변환 위해
			answer.push_back(high - low);
		}
		else
		{
			reverse(query.begin(), query.end());
			for (int j = 0; j < idx; j++)
			{
				query[j] = 'a';
			}
			int low = lower_bound(r.begin(), r.end(), query) - r.begin();
			for (int j = 0; j < idx; j++)
			{
				query[j] = 'z';
			}
			int high = upper_bound(r.begin(), r.end(), query) - r.begin();
			answer.push_back(high - low);
		}
	}
	return answer;
}

int main()
{
	vector<string> w = { "frodo", "front", "frost", "frozen", "frame", "kakao" };
	vector<string> q = { "fro??", "????o", "fr???", "fro???", "pro?" };
	vector<int> s = solution(w, q);
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
}
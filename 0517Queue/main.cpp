///큐를 짤 수 있는 방법
/// 연결리스트 배열
/// 특징
/// 스택 LIFO, DFS에 유용하게 쓰임
/// 큐 FIFO, BFS에 유용하게 쓰임
///STL
/// push pop empty size ...
/*
deque : double ended queue
*/

#include<iostream>
#include<deque>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	/*queue<int> q;
	deque<int> d;
	q.push(1);
	q.push(2);
	q.push(3);
	for (int i = 0; i < q.size(); i++)
	{
		cout << q.front() << " ";
		q.pop();
	}
	queue<pair<int, char>>q1;
	q1.push(make_pair(1, 'a'));
	q1.push(make_pair(2, 'b'));
	cout << q1.front().first << endl;
	cout << q1.back().second << endl;*/
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(10);
	pq.push(11);
	pq.push(9);
	pq.push(91);
	for (int i = 0; i < 4; i++)
	{
		cout << pq.top()<<endl;
		pq.pop();
	}
}
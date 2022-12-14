#include<iostream>
using namespace std;

int a[1000001], sorted[1000001];

void merge(long left, long right) {
	long mid;
	long p1, p2, p3;

	if (left < right) {
		mid = (left + right) / 2;
		merge(left, mid);
		merge(mid + 1, right);
		p1 = left;
		p2 = mid + 1;
		p3 = left;

		while (p1 <= mid && p2 <= right) {
			if (a[p1] < a[p2])sorted[p3++] = a[p1++];
			else sorted[p3++] = a[p2++];
		}

		while (p1 <= mid) sorted[p3++] = a[p1++];

		while (p2 <= right) sorted[p3++] = a[p2++];

		//배열 sorted를 배열 a로 재복사
		for (int i = left; i <= right; i++) {
			a[i] = sorted[i];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long n, i;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	merge(1, n);
	for (i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

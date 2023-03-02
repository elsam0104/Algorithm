#include<iostream>
using namespace std;
int d, h,num;
void func(int dam)
{
	if (dam >= h)
		return;
	num++;
	int b = dam + d;
	d *= 2;
	func(b);
}
int main()
{
	cin >> d >> h;
	func(d);
	cout<<num;
}
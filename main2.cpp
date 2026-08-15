include <iostream>
using namespace std;
int main()
{
	cout << "它可以计算您的年龄包含多少个月" << endl << "请输入您的年龄";
	int n;
	cin >> n;
	n = n * 12;
	cout << "您的年龄包含" << n << "个月" << endl;
	return 0;
}
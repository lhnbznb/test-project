#include <iostream>
using namespace std;
double co(double);
int main()
{
	cout << "这是一个摄氏度转换为华氏度的程序，" << endl << "请输入摄氏度：";
	double n;
	cin >> n;
	double m = co(n);
	cout << "华氏度为：" << m;
	return 0;
}
double co(double i)
{

	return i * 1.8 + 32.0;

}
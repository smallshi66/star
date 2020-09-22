#include<iostream>
using namespace std;
int main()
{
	double centigrade, Fahrenheit;
	cout << "请输入摄氏度";
	cin >> centigrade;
	Fahrenheit = 1.8 * centigrade + 32;
	cout << "转换的华氏度为" << Fahrenheit <<"华氏度"<<endl;
	return 0;


}
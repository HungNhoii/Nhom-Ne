#include<iostream>
using namespace std;
int tong(int a, int b)
{
	return a + b;
}
int hieu(int a, int b)
{
	return a - b;
}
int tich(int a, int b)
{
	return a * b;
}
float thuong(int a, int b)
{
	return a*1.0 / b;
}
int main()
{
	int a, b;
	cout << "Nhap 2 so tu nhien: ";
	cin >> a >> b;
	cout << "Tong = " << tong(a, b) << endl;
	cout << "Hieu = " << hieu(a, b) << endl;
	cout << "Tich = " << tich(a, b) << endl;
	if (b == 0)
		cout << "so chia phai khac 0.";
	else
		cout << "Thuong = " << thuong(a, b) << endl;
	return 0;
}
#include <iostream>
using namespace std;
int tong(int a, int b) {
	int tong = 0;
	tong = a + b;
	return tong;
}
int hieu(int a, int b) {
	int hieu = 0;
	hieu = a - b;
	return hieu;
}
int tich(int a, int b)
{
	int tich = 1;
	tich = a * b;
	return tich;
}
float thuong(int a, int b)
{
	float thuong = 0;
	if (b == 0)
		cout << "Error";
	else
		thuong = float(a / b);
	return thuong;
}
//float cvdtHV(float canh) {
//	float chuvi, dientich;
//	chuvi = canh * 4;
//	dientich = canh * canh;
//	cout << "chu vi hinh vuong:" << chuvi << endl << "dien tich hinh vuong:" << dientich;
//}


int main()
{
	int a, b;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << a << "+" << b << "=" << tong(a, b) << endl;
	cout << a << "-" << b << "=" << hieu(a, b) << endl;
	cout << a << "*" << b << "=" << tich(a, b) << endl;
	cout << a << "/" << b << "=" << thuong(a, b) << endl;

	return 0;
}
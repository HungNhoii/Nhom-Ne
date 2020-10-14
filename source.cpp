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
<<<<<<< HEAD
float cvdtHV(float canh) {
	float chuvi, dientich;
	chuvi = canh * 4;
	dientich = canh * canh;
	cout << "chu vi hinh vuong:" << chuvi << endl << "dien tich hinh vuong:" << dientich;
}
=======
>>>>>>> b8fe1102a1f0a7c3ece110eb50847edcaa7148e7


int main()
{
<<<<<<< HEAD
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << a << "+" << B << "=" << tong(a, b) << endl;
	
	return 0;
=======
	int luachon;
	cout << "1. Cong, tru, nhan, chia 2 so." << endl;
	switch (luachon)
	{
	case 1:
		int a, b;
		cout << "Nhap 2 so nguyen: ";
		cin >> a >> b;
		cout << a << " + " << b << " = " << tong(a, b) << endl;
		cout << a << " - " << b << " = " << hieu(a, b) << endl;
		cout << a << " x " << b << " = " << tich(a, b) << endl;
		cout << a << " / " << b << " = " << thuong(a, b) << endl;
	default:
		break;
	}
>>>>>>> b8fe1102a1f0a7c3ece110eb50847edcaa7148e7
}
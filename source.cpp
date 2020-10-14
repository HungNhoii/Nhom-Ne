#include <iostream>
using namespace std;
#define PI 3.14;
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
int cvdtHV(float chuvi,float dientich,int canh) {
	cout << "nhap canh ";
	cin >> canh;
	chuvi = canh * 4;
	dientich = canh * canh;
	cout << "chu vi hinh vuong:" << chuvi << endl << "dien tich hinh vuong:" << dientich;
}
int cvdthHCN(float chuvi, float dientich, int a, int b) {
	
	cout << "nhap vao a:";
	cin >> a;
	cout << "nhap b:";
	cin >> b;
	chuvi = (a + b) * 2;
	dientich = a * b;
	cout << "chu vi hinh chu nhat:" << chuvi << endl << "dien tich hinh chu nhat:" << dientich;

}
int cvdtHT(float chuvi,float dientich, int r) {
	
	cout << "nhap vao r:";
	chuvi = 2 * r*PI;
	dientich = PI *r*r;

}

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
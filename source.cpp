#include <iostream>
#include <ctime>
using namespace std;
int tong(int a, int b){
	int tong = 0;
	tong = a + b;
	return tong;
}
int hieu(int a, int b){
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
		thuong = float(a) / float(b);
	return thuong;
}
int soRandom()
{
	int so;
	for (int i = 0; i <= 100; i++)
		so = rand() % 100;
	return so;
}
int main()
{
	int a, b;
	int r1 = soRandom();
	int r2 = soRandom();
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << a << " + " << b << " = " << tong(a,b) << endl;
	cout << a << " - " << b << " = " << hieu(a, b) << endl;
	cout << a << " * " << b << " = " << tich(a, b) << endl;
	cout << a << " / " << b << " = " << thuong(a, b) << endl;
	cout << "So ngau nhien 1: " << r1 <<endl;
	cout << "So ngau nhien 2: " << r2 <<endl;
	cout << "Tong 2 so ngau nhien " << r1 << " + " << r2 << " = " << tong(r1, r2) << endl;
	return 0;
}
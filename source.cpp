#include <iostream>
using namespace std;
int kq=0;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
int tich(int a, int b)
{
	int tich=1;
	tich=a*b;
	return tich;
}
float thuong(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	switch (phepToan)
	{
	case '+':
		cout<<"Tong" <<a<<"+"<<b<<" la:"<<a+b<<endl;
		break;
	case '-':
		cout<<"Hieu la:"<<a-b<<endl;
		break;
	case '*':
		break;
	case '/':

		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}
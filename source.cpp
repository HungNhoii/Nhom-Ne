#include <iostream>
using namespace std;
int tong(int a, int b){
	int tong=0;
	tong=a+b;
	return tong;
}
int hieu(int a, int b){
	int hieu=0;
	hieu=a-b;
	return hieu;	
}
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
<<<<<<< HEAD
		cout<<"Tong" <<a<<"+"<<b<<" la:"<<a+b<<endl;
=======
		
>>>>>>> 2f0b04a8ca8e0a35787dcd87d90202f0f6bf2a0b
		break;
	case '-':
		
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
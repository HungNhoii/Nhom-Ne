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
int tich(int a, int b)
{
	int tich=1;
	tich=a*b;
	return tich;
}
float thuong(int a, int b)
{
	float thuong=0;
	if (b==0)
		cout<<"Error";
	else
		thuong=float(a/b);
	return thuong;
}
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
		cout<<"Tong"<<a<<" + "<<b<<"la: "<<tong(a,b)<<endl;
		break;
	case '-':
		cout<<"Hieu"<<a<<" - "<<b<<"la: "<<hieu(a,b)<<endl;
		break;
	case '*':
		cout<<"Tich"<<a<<" * "<<b<<"la: "<<tich(a,b)<<endl;
		break;
	case '/':
		cout<<"Thuong"<<a<<" / "<<b<<"la: "<<thuong(a,b)<<endl;
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}
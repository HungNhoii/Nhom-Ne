#include <iostream>
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

float chuViHinhVuong(float canh)
{
	return canh*4;
}

float dienTichHinhVuong(float canh)
{
	return canh*canh;
}
float chuViHinhChuNhat(float dai, float rong)
{
	return (dai+rong)*2;
}
float dienTichHinhChuNhat(float dai, float rong)
{
	return dai*rong;
}

float chuViHinhTron(float bankinh)
{
	return 2*bankinh*3.14;
}

float dienTichHinhTron(float bankinh)
{
	return bankinh*bankinh*3.14;
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
	int luachon;
	cout<<"1.Tinh chu vi dien tich hinh vuong."<<endl;
	cout<<"2.Tinh chu vi dien tich hinh chu nhat."<<endl;
	cout<<"3.Tinh chu vi dien tich hinh tron."<<endl;
	cout<<"Nhap lua chon: ";
	cin>>luachon;
	switch(luachon)
	{
		case 1:
			int canh;
			cout<<"Nhap chieu dai canh hinh vuong: ";
			cin>>canh;
			cout<<"Chu vi = "<<chuViHinhVuong(canh)<<"; Dien tich = "<<dienTichHinhVuong(canh);
			break;
		case 2:
			int dai, rong;
			cout<<" Nhap chieu dai 2 canh hinh chu nhat: ";
			cin>>dai>>rong;
			cout<<"Chu vi = "<<chuViHinhChuNhat(dai,rong)<<"; Dien tich = "<<dienTichHinhChuNhat(dai,rong);
			break;
		case 3:
			int bankinh;
			cout<<"Nhap chieu dai ban kinh hinh tron: ";
			cin>>bankinh;
			cout<<"Chu vi = "<<chuViHinhTron(bankinh)<<"; Dien tich = "<<dienTichHinhTron(bankinh);
			break;
	}
	return 0;
}
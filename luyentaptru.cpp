#include<iostream>
using namespace std;
void kiemTraLuyenTapTru()
{
	int a, b, ketqua;
	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	cout << a << " - " << b << " = ";
	cout << "\nNhap ket qua phep trinh tren: ";
	cin >> ketqua;
	if (ketqua == a - b)
		cout << "Ket qua dung!";
	else
		cout << "ket qua sai!";
}
int main()
{
	kiemTraLuyenTapTru();
	return 0;
}
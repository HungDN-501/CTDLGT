// Thap Ha Noi
#include<iostream>
using namespace std;

void chuyen(int n, char a, char b) {
	cout << "\n Chuyen dia thu " << n << " tu coc " << a << " sang coc " << b;
}

void thapHaNoi(int n, char a, char b, char c) {
	if (n == 1) {
		chuyen(1, a, c);
	}
	else
	{
		thapHaNoi(n - 1, a, c, b);
		chuyen(n, a, c);
		thapHaNoi(n - 1, b, a, c);
	}
}

void main() {
	cout << "Bai toan thap Ha Noi \n \n";

	// so vong
	int n;

	// so thap 
	char a = 'A', b = 'B', c = 'C';

	cout << "Nhap so vong : ";
	cin >> n;
	thapHaNoi(n, a, b, c);
	cout << "\n \n \n";
}
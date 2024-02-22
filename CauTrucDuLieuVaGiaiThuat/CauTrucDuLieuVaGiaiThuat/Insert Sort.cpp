/*
	Insert Sort : Thuật toán sắp xếp chèn
	- Chèn phần tử vào đúng vị trí của nó trong 1 mảng đã được sắp xếp trước đó
*/

#include<iostream>
using namespace std;

void NhapMang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "phan tu A[" << i << "]" << "=";
		cin >> arr[i];
	}
}

void XuatMang(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void insertSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		cout << "i hien tai : " << i << " \n \n";
		key = arr[i];
		cout << "key hien tai : " << key << " \n \n";
		j = i - 1;
		cout << "j hien tai : " << j << " \n \n";

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
			cout << "j sau khi doi : "<< j <<" \n \n";

		}
		arr[j + 1] = key;
	}
}

int main() {
	cout << "Thuật toán sắp xếp chọn Insert Sort \n \n";
	int arr[100];
	int n;
	cout << "nhap so phan tu cua mang n:";
	cin >> n;
	NhapMang(arr, n);
	cout << " mang ban dau la: ";
	XuatMang(arr, n);
	insertSort(arr, n);
	cout << "\n mang khi sap xep la: ";
	XuatMang(arr, n);
	cout << "\n \n \n";
	return 0;
}
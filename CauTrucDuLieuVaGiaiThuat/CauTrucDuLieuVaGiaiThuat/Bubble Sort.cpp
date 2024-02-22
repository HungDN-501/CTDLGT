/*
	Bubble Sort : Thuật toán sắp xếp nổi bọt
	- So sánh cặp phần tử liền kề và hoán đổi chúng nếu chúng không được sắp xếp đúng thứ tự
	- https://blog.luyencode.net/thuat-toan-sap-xep-noi-bot/
*/

#include<iostream>
using namespace std;

void nhapArr(int arr[], int n) {
	cout << "Nhap phan tu cho mang \n";
	for (int i = 0; i < n; i++) {

		cout << "Phan tu " << i << " : ";
		cin >> arr[i];
	}
}

void bubbleSort(int arr[], int n) {
	// Chu y : khi lay phan tu phai thi dieu kien vong lap luon phai < n
	// vi mang bat dau tu index 0 
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void XuatMang(int arr[], int n) {
	cout << "Mang sau khi sap xep la : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void main() {
	cout << " ----- Thuat toan sap xep noi bot Bubble Sort \n \n";
	int n, arr[50];
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	nhapArr(arr, n);
	// sap xep mang
	bubbleSort(arr, n);
	XuatMang(arr, n);
	cout << "\n \n \n";
}
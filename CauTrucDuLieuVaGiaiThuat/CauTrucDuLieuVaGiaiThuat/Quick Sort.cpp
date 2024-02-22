/*
	Quick Sort : Thuật toán sắp xếp nhanh
	- Kiểu dạng thuật toán chia để trị
	- Chọn ngẫu nhiên một phần tử nào đó của dãy làm phần tử khóa (pivot)
	- https://blog.luyencode.net/thuat-toan-sap-xep-quick-sort/
*/

#include<iostream>
using namespace std;

// phân hoạch từ left tới right và trả về vị trí chốt(pivot) sau khi phân hoạch xong
int partition(int arr[], int left, int right) {
	int pivot = arr[right]; // tạo chốt
	int i = left - 1; // khởi tạo vị trí i
	// duyệt phần tử và đổi chỗ
	for (int j = left; j < right; j++) {
		// Nếu phần tử tại index j > pivot
		if (arr[j] <= pivot) {
			// tăng i lên và đổi chỗ 2 giá trị tại index i và j
			++i;
			swap(arr[i], arr[j]);
		}
		// đưa pivot về giữa
		i++;
		swap(arr[i], arr[right]);
		return i; // trả về vị trí pivot
	}
}

void quickSort(int arr[], int left, int right) {
	if (left >= right) return;  // kiểm tra tham số truyền vào sai
	// phân hoạch và sắp xếp
	int pivot = partition(arr, left, right); // lấy index pivot khi phân hoạch xong
	quickSort(arr, left, pivot - 1); // sắp xếp lại mảng bên trái pivot
	quickSort(arr, pivot + 1, right); // sáp xếp lại mảng bên phải pivot
}

void nhapArr(int arr[], int n) {
	cout << "Nhap phan tu cho mang \n";
	for (int i = 0; i < n; i++) {

		cout << "Phan tu " << i << " : ";
		cin >> arr[i];
	}
}

void XuatMang(int arr[], int n) {
	cout << "Mang sau khi sap xep la : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	cout << " ----- Thuat toan sap xep nhanh Quick Sort \n \n";
	int n, arr[50];
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	nhapArr(arr, n);
	// sap xep mang
	quickSort(arr, 0, n - 1);
	XuatMang(arr, n);
	cout << "\n \n \n";
	return 0;
}
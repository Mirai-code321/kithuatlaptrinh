#include <iostream>
#include <math.h>
using namespace std;

void docfile(int*& a, int& n) {
	const char* fn = "NUM.INP";
	FILE* fp = fopen(fn, "r");//đọc file văn bản
	if (!fp) {
		cout << "khong doc duoc file!" << fn << endl;
	}
	else {
		cout << "mo duoc file " << fn << endl;
	}
	fscanf(fp, "%d", &n);
	a = new int[n];
	for (int i = 0; i < n; i++) {
		fscanf(fp, "%d", &a[i]);
	}
	fclose(fp);
}

void xuatmang(int* a, int n) {//hàm xuất các số nguyên 
	cout << "\nmang: ";
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " ";
	}
}

bool SNT(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}

int demSNT(int* a, int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (SNT(*(a + i))) {
			dem++;
		}
	}
	return dem;
}

void sapxeptang(int *a,int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(a + i) > *(a + j)) swap(*(a + i), *(a + j));
		}
	}
}

void ghifile(int*& a, int& n) {
	const char* fn = "NUM.OUT";//định nghĩa file ghi;
	FILE* fp = fopen(fn, "w");//mở file ở  chế độ ghi;
	if (!fp) {
		cout << "khong the mo file " << fn << endl;
	}
	else {
		cout << "dang viet file " << fn<<"..." << endl;
	}
	int cnt = demSNT(a, n);
	fprintf(fp, "%d\n", cnt);
	sapxeptang(a, n);
	for (int i = 0; i < n; i++) {
		fprintf(fp, "%d ", *(a + i));
	}
	fprintf(fp, "\n");
	fclose(fp);
	xuatmang(a, n);
}
int main()
{
	int* a, n;
	docfile(a, n);
	xuatmang(a, n);
	cout<<endl;
	
	ghifile(a, n);

	return 0;
}

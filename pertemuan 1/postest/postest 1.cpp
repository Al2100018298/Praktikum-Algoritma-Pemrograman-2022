#include<iostream>
#include<math.h>
using namespace std;

int main() {
	float  x1, y1, x2, y2, A, B, jarak;
	jarak = 0;
	cout << "Program Untuk Menghitung Jarak Antara 2 Titik" << endl;
	cout << "............................................." << endl;
	cout << "Masukkan nilai titik x1 :";
	cin >> x1;
	cout << "Masukkan nilai titik y1 :";
	cin >> y1;
	cout << "Masukkan nilai titik x2 :";
	cin >> x2;
	cout << "Masukkan nilai titik y2 :";
	cin >> y2;
	A = (x2-x1)*(x2-x1);
	B = (y2-y1)*(y2-y1);
	jarak = sqrt (A+B);
	cout << "Jarak antara titik A ke B :" << jarak << endl;
	return 0;
}

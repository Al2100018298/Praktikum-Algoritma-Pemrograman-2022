#include<iostream>
using namespace std;

int penjumlahan (int a, int b){
	int hasil;
	hasil = a+b;
	return hasil;
}
int pengurangan (int a, int b){
	int hasil;
	hasil = a-b;
	return hasil;
}
int perkalian (int a, int b){
	int hasil;
	hasil = a*b;
	return hasil;
}
float pembagian (float a, float b){
	float hasil;
	hasil = a/b;
	return hasil;
}
int main (){
	int a, b, masuk;
	float c, d;
	cout << "=========================================" <<endl;
	cout << "Kalkulator" << endl;
	cout << "=========================================" <<endl;
	cout << "Pilih Salah Satu :" << endl;
	cout << "1. Penambahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "=========================================" << endl;
	cout << "Pilih No :"; 
	cin >> masuk;
	
	if (masuk == 1){
		cout << "Angka pertama :"; cin >> a;
		cout << "Angkan Kedua  :"; cin >> b;
		cout << "Hasil Penjumlahan " << a << "+" << b << "=" << penjumlahan(a,b);
	}
	else if (masuk == 2){
		cout << "Angka Pertama :"; cin >> a;
		cout << "Angka Kedua   :"; cin >> b;
		cout << "Hasil Pengurangan " << a << "-" << b << "=" << pengurangan(a,b);
	}
	else if (masuk == 3){
		cout << "Angka Pertama :"; cin >> a;
		cout << "Angka Kedua   :"; cin >> b;
		cout << "Hasil Perkalian " << a << "*" << b << "=" << perkalian(a,b);
	}
	else if (masuk == 4){
		cout << "Angka Pertama :"; cin >> c;
		cout << "Angka Kedua   :"; cin >> d;  
		cout << "Hasil Pembagian " << c << ":" << d << "=" << pembagian(c,d);
	}
	else {
		cout << "Tidak Ada Pilihan Tersebut";
	}
	return 0;
}
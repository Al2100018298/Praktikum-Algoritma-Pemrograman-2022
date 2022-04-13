#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	float hrg,jml,ttl;
	char nm[20],bbm[20];
	cout<<"Pembelian Bahan Bakar di SPBU"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"Masukkan Nama Pembeli: ";cin>>nm;
	cout<<"Masukkan Jenis Bahan Bakar: ";cin>>bbm;
	cout<<"Masukkan Harga BBM: ";cin>>hrg;
	cout<<"Masukkan Jumlah Pembelian Liter BBM:";cin>>jml;
	ttl=hrg*jml;
	cout<<"-----------------------------"<<endl;
	cout<<"Struk Pembayaran"<<endl;
	cout<<"Nama Pembeli: "<<nm<<endl;
	cout<<"Jenis Bahan Bakar: "<<bbm<<endl;
	cout<<"Harga BBM: "<<hrg<<endl;
	cout<<"Jumlah Liter Pembelian: "<<jml<<endl;
	cout<<"Total :"<<ttl<<endl;
	getch();
	
	
}
#include<iostream>
using namespace std;
 
 class Iteratif{
	public : 
		int iteratif();
		int proses();
		void Akhir();
	private : 
		int b, hasil, saku, kuliah, jajan, total_saku, pengeluaran;	
		int total_kuliah, total_jajan, tabungan;
};

int Iteratif::iteratif(){ 
	cout<<"==Aplikasi Perhitungan Uang saku=="<<endl;
	cout<<"Masukkan bulan: ";cin>>b;
	cout<<endl;
	for(int i=0; i<b; i++){
		cout<<"Perhitungan bulan ke: "<<i+1<<endl;
		cout<<"Masukkan uang saku: ";cin>>saku;
		cout<<"Masukkan keperluan kuliah: ";cin>>kuliah;
		cout<<"Masukkan keperluan jajan:";cin>>jajan;
		total_saku+=saku;
		total_kuliah+=kuliah;
		total_jajan+=jajan;
			
	}	
	pengeluaran=total_kuliah+total_jajan;
	tabungan=total_saku-pengeluaran;
	
}


void Iteratif::Akhir(){ 
	cout<<endl;  
	cout<<"Nota Keuangan"<<endl;
	cout<<"Total saku: "<<total_saku<<endl;
	cout<<"Pengeluaran: "<<pengeluaran<<endl;
	cout<<"Uang yang ditabungkan: "<<tabungan<<endl;
}

int main(){
	Iteratif uang; 
	uang.iteratif();
	uang.Akhir(); 

	return 0;
}


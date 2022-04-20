#include <iostream>
#include <string>

using namespace std;

class Perulangan{
  public:
    int rekursif_n(int n);
    int proses();
    void akhir();
    void inputan(); 
  private:
    int nim,sks;
    int total_sks, biaya_sks, sks_diskon, sks_akhir,diskon;
  	char nama[40];
	string matkul;
};
  int Perulangan::rekursif_n(int n){
    
    if(n>=1){
      rekursif_n(n-1);
      cout<<"Inputkan nama Matkul: ";cin>>matkul;
    }
    
    
  }
  void Perulangan::inputan(){
  	
    cout<<"===Pilihan menu Maatkul==="<<endl;
  cout << "1. Matematika Diskret-2 sks" << endl;
      cout << "2. Aljabar Linear Matrik-3 sks" << endl;
      cout << "3. Algoritma Pemrograman-2 sks" << endl;
      cout << "4. Bahasa Indonesia-2 sks" << endl;
      cout << "5. Pemrograman WEB-2 sks " << endl; 

    cout<<"Inputkan data diri mahasiswa: "<<endl;
    cout<<"Masukkan Nama Mahasiswa: ";cin>>nama;
    cout<<"Masukkan NIM Mahasiswa: ";cin>>nim;
    cout<<"Masukkan total sks: ";cin>>sks;
    cout<<endl;
    biaya_sks=120000;
    cout<<"Biaya Per SKS: "<<biaya_sks<<endl;
    
    
  }
  int Perulangan::proses(){
  	
    total_sks=biaya_sks*sks;
   
    sks_diskon=10%total_sks+5%total_sks;
    sks_akhir=total_sks-sks_diskon;
    
  }
  void Perulangan::akhir(){
    cout<<"==Aplikasi Pemilihan Matkul dan SKS=="<<endl;
    cout<<"Nama Mahasiswa: "<<nama<<endl;
    cout<<"NIM Mahasiswa: "<<nim<<endl;
    cout<<"Daftar Matkul: "<<rekursif_n(5)<<endl;
    cout<<"Jumlah SKS: "<<sks<<endl;
    cout<<"Total Pembayaran"<<sks_akhir<<endl;
    
    
  }

int main(){
	Perulangan sks; 
	sks.inputan();
    sks.rekursif_n( 5);
    sks.proses();
	sks.akhir(); 
	return 0;
}
  


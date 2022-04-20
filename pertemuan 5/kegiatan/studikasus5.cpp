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
    int nim,sks,jml_sks;
    int total_sks, biaya_sks, sks_diskon, sks_akhir,diskon,matkul;
  	char nama[40];
	
};

void Perulangan::inputan(){
  	
    cout<<"===Pilihan menu Matkul==="<<endl;
  	cout << "1. Matematika Diskret-2 sks" << endl;
    cout << "2. Aljabar Linear Matrik-3 sks" << endl;
    cout << "3. Algoritma Pemrograman-2 sks" << endl;
    cout << "4. Bahasa Indonesia-2 sks" << endl;
    cout << "5. Pemrograman WEB-2 sks " << endl; 

    cout<<"Inputkan data diri mahasiswa: "<<endl;
    cout<<"Masukkan Nama Mahasiswa: ";cin>>nama;
    cout<<"Masukkan NIM Mahasiswa: ";cin>>nim;
    biaya_sks=120000;
    cout<<"Biaya Per SKS: "<<biaya_sks<<endl;   
    cout<<endl;
    
  }

  int Perulangan::rekursif_n(int n){
    
    if(n>=1){
      rekursif_n(n-1);
		cout<<"Inputkan sks:";cin>>sks;
      	jml_sks+=sks;
	  }
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
    cout<<"Daftar MatkulYang Diambil: "<<matkul<<endl;
    cout << "1. Matematika Diskret-2 sks" << endl;
    cout << "2. Aljabar Linear Matrik-3 sks" << endl;
    cout << "3. Algoritma Pemrograman-2 sks" << endl;
    cout << "4. Bahasa Indonesia-2 sks" << endl;
    cout << "5. Pemrograman WEB-2 sks " << endl; 
    cout<<"Jumlah SKS: "<<jml_sks<<endl;
    cout<<"Total Pembayaran: "<<sks_akhir<<endl;
        
  }

int main(){
	Perulangan sks; 
	sks.inputan();
    sks.rekursif_n( 5);
    sks.proses();
	sks.akhir(); 
	return 0;
}

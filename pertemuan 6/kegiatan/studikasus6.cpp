#include <iostream>

using namespace std;

class array{
      public:
      void input();
      void proses();
      void output();
      private:
      char dosen[50], matkul[30];
      int daftar_nilai, maksimum, minimum,n,nilai[10],i,total;
      float rata_rata;
};

void array::input(){
	cout<<"Masukkan nama dosen : ";
	cin>>dosen;
	cout<<"Masukkan nama Mata Kuliah : ";
	cin>>matkul;
	cout<<endl;
  for(int i=0; i<5; i++){
    cout<<"Masukkan array indeks ke- "<<i<<endl;
    cout<<"Masukkan nilai : ";
    cin>>nilai[i];
    
    total+=nilai[i];
   
      }
}

void array::proses(){  
 	 rata_rata=total/5;
  	//maksimum = nilai[0];
	for(int i = 0; i <5; i++) {
    if (nilai[i] > maksimum)  {
      maksimum = nilai[i];
    }else {
    }
  }
	minimum=nilai[0];
  	for(int i = 0; i <5; i++) {
    if (nilai[i] < minimum)  {
      minimum= nilai[i];
  
}
}
}

void array::output(){
  cout<<endl<<endl;	
  cout<<"== Hasil Penampilan Nilai Matkul =="<<endl;
  cout<<"Dosen : "<<dosen<<endl;
  cout<<"Nama matkul - "<<matkul<<endl;
  cout<<"Nilai Min : "<<minimum<<endl;
  cout<<"Nilai Maksimum : "<<maksimum<<endl;
  cout<<"Nilai rata-rata : "<<rata_rata<<endl;
  cout<<"Daftar Nilai : "<<endl;
  for(int k=0; k<5; k++){  // mencetak array
		cout<<"Nilai ke - "<<k<<" : "<<nilai[k]<<endl;
	}
}

int main(){
	//int n;
  //cout<<"Masukkkan batas nilai array:";
  //cin>>n;
  array nilai;
  nilai.input();
  nilai.proses();
  nilai.output();
  
  return 0;
}

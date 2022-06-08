#include <iostream>
using namespace std;

class array{
public :
void input();
void proses();
void output();
private :
int a[3][3]={{60,65,80},{45,80,90},{45,90,90}};
int i,j;
float tk1,tk2,tk3,tb1,tb2,tb3;
float jtk1,jtk2,jtk3,jtb1,jtb2,jtb3;
};
	
void array::input(){
  //a[3][3]={{60,65,80},{45,80,90},{45,90,90}};
}
void array::proses(){
  tk1=a[0][0]+a[0][1]+a[0][2];
  tk2=a[1][0]+a[1][1]+a[1][2];
  tk3=a[2][0]+a[2][1]+a[2][2];
  tb1=a[0][0]+a[1][0]+a[2][0];
  tb2=a[0][1]+a[1][1]+a[2][1];
  tb3=a[0][2]+a[1][2]+a[2][2];
  jtk1 = tk1 / 3;
  jtk2 = tk2 / 3;
  jtk3 = tk3 / 3;
  jtb1 = tb1 / 3;
  jtb2 = tb2 / 3;
  jtb3 = tb3 / 3;
}
void array::output(){ 
	cout<<"______________________________________________________________________________________________________________________"<<endl;
    cout<<"| Tahun Prodi | Teknik Komputer | Teknik Elektro | Teknik Pemesanan | Rata-rata kelulusan per tahun dari semua prodi |"<<endl;
 	cout<<"| 2015 |"; 
  for (i = 0;i < 1; i++){
		for ( j = 0; j < 3; j++){
			
			cout << a[i][j] << " |";
		}
	}
	cout<<" "<<jtk1<<"|"<<endl;
	cout<<"| 2016 |";
  for (i = 1;i < 2; i++){
		for ( j = 0; j < 3; j++){
			
			cout << a[i][j] << " |";
		}
	}
	cout<<" "<<jtk2<<"|"<<endl;
	
	cout<<"| 2017 |";
  for (i = 2;i < 3; i++){
		for ( j = 0; j < 3; j++){
			
			cout << a[i][j] << " |";
		}
	}
  	cout<<" "<<jtk3<<"|"<<endl;
	

  cout<<"| Rata-rata pertahun per prodi|"<<" "<<jtb1<<"|"<<jtb2<<"|"<<jtb3<<"|";
  
  
}

int main() {
  cout << "Studi Kasus Program Kelulusan Mahasiswa \n";
  array cek;
  cek.input();
  cek.proses();
  cek.output();
  return 0;
}

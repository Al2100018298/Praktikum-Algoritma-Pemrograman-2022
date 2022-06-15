#include <iostream>
using namespace std;

class matriks{
  public:
          int input();
          int dimensi1();
          int tukar(int a, int b);
          int tampil();
          int bubble_sort();
          int kembali();
          int output();
  private:
          int ar1[10][10], ar2[20], ar3[10][10];
          int d=0,k=0,i,j,n=20;
          int baris, kolom;        
};


int matriks::input(){
  cout<<"Masukkan baris: ";cin>>baris;
  cout<<"Masukkan kolom: ";cin>>kolom;
  for( i=0; i<baris; i++){
             for( j=0; j<kolom; j++){
                     cout<<"masukan data array ke-["<<i<<"],["<<j<<"] : ";
                     cin>>ar1[i][j];}}
  
}
int matriks::dimensi1(){
  for( i=0;i<4;i++){
             for( j=0;j<5;j++){
                     ar2[k]=ar1[i][j];
					 k++;
                     }
                     }
  cout<<endl;
  cout<<"Data Array ar2 Hasil Penggabungan  :"<<endl<<endl;
	for (k=0; k<n; k++){
    cout<<"ar2["<<k<<"]="<<ar2[k]<<endl;}
    cout<<endl;
}

int matriks::tukar(int a,int b){
    int t;
    t=ar2[b];
    ar2[b]=ar2[a];
    ar2[a]=t;
}

int matriks::tampil(){
	for (int i=0;i<n;i++){
	     cout<<"["<<ar2[i]<<"] ";
	}
	cout<<endl;
}

int matriks::bubble_sort(){
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (ar2[j]<ar2[j-1]){
				tukar(j , j-1);
			}
		}
		cout<<"Menampilkan array hasil sorting: "<<endl;
		tampil();
	}
	cout<<endl;
}

int matriks::kembali(){
  for( i=0;i<4;i++){
             for( j=0;j<5;j++){
                     ar3[i][j]=ar2[d];
					 d++;
                     }
                     }
}

int matriks::output(){
  cout<<"Matriks 2 dimensi sebelum diurutkan:"<<endl;
  for( i=0;i<4;i++){
             for( j=0;j<5;j++){
                     cout<<ar1[i][j]<<" ";
  }
   cout<<endl;
   }
   cout<<endl;
  cout<<"Matriks 2 dimensi setelah diurutkan:"<<endl;
 for(int i=0;i<4;i++){
             for(int j=0;j<5;j++){
                     cout<<ar3[i][j]<<" ";
  }
   cout<<endl;
   }
  
  }

int main(){
	cout<<"===Studi kasus tentang array 1 dimensi 2 dimensi==="<<endl;
  matriks cek;
  cek.input();
  cek.dimensi1();
  cek.bubble_sort();
  cek. kembali();
  cek.output();
  return 0;
}


#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class sorting{
    public:
    void input();
    void proses();
    void output();
    private:
    typedef struct{

    int kode;
    char nama[20];
    int stock;

    }
    brg;
    brg barang[5];
    brg temp;
    int n,i,b, cari, ada;
};
void sorting::input(){

cout<<"Masukan banyak data = ";
cin>>n;
for(i=0;i<n;i++){

cout<<endl;
cout<<"Data ke-"<<(i+1)<<":"<<endl;
cout<<"Input Kode Barang : ";
cin>>barang[i].kode;
cout<<"Input Nama Barang : ";
cin>>(barang[i].nama);
cout<<"Input Stok Barang : ";
cin>>barang[i].stock;
cout<<endl;

}
}
void sorting::proses(){
  for(i=0;i<n;i++){
    for(b=0;b<n-1;b++){
      if(barang[b].kode > barang[b+1].kode){
        temp.kode=barang[b].kode;             
        barang[b].kode=barang[b+1].kode;
        barang[b+1].kode=temp.kode; 
        
        strcpy(temp.nama,barang[b].nama);            
        strcpy(barang[b].nama,barang[b+1].nama);
        strcpy(barang[b+1].nama,temp.nama);

        temp.stock=barang[b].stock;
        barang[b].stock=barang[b+1].stock;
        barang[b+1].stock=temp.stock;
                  
        
      }
    }
  }
}

void sorting::output(){
  cout<<endl;
  
        cout<<"\t\t\t"<<"Setelah data diurutkan berdasarkan kode terkecil : "<<endl;
      cout<<"\t\t\t"<<"-------------------------------------------------------------------"<<endl;
      cout<<"\t\t\t"<<"|  Kode Barang  |  Nama Barang  |  Stock Barang  |  "<<endl;
      cout<<"\t\t\t"<<"-------------------------------------------------------------------"<<endl;
               
			    for(b=0;b<n;b++){

        cout<<"\t\t\t"<<"|      "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"\t\t""       |"<<endl;

                     }
        cout<<"\t\t\t"<<"-------------------------------------------------------------------"<<endl;
	    cout<<endl;
        cout<<"\t\t\t"<<"Masukan Kode Barang Untuk Mencari : ";
        cin>>cari;
        ada = 0;
        for(b=0;b<n;b++)
            {
            if(barang[b].kode==cari)
                {
                    ada=1;
              		cout<<"\t\t\t"<<"-------------------------------------------------------------------"<<endl;
                    cout<<"\t\t\t"<<"|      Nama Barang     |       Stock Barang    | "<<endl;
                   	cout<<"\t\t\t"<<"-------------------------------------------------------------------"<<endl;
                    cout<<"\t\t\t"<<"|         "<<barang[b].nama<<"\t\t        "<<barang[b].stock<<"\t\t       "<<"        |"<<endl;
					 }
           }
                    cout<<"\t\t\t"<<"-------------------------------------------------------------------"<<endl;
        if (ada == 0)
           {
                cout<<"Data Tidak ditemukan"<<endl;
            }
        return 0;
                    }
                    
int main(){
cout <<"Studi Kasus Program Sorting dan Searching \n";
  sorting cek;
  cek.input();
  cek.proses();
  cek.output();
  return 0;
}

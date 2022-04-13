#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // inisialisasi variable terlebih dahulu.
    int jumlah_beli, bayar, diskon, jumlah[100], harga[100],total[50],delivery;
    float total_semua, jarak, total_bayar;
    string nama_barang[100],nama_pembeli;

    cout<<"===========================\n";
    cout<<"Program kasir restauran\n";
    cout<<"===========================\n\n";
    cout<<"=========Menu makanan=========="<<endl;
    cout<<"1.Ayam geprek 	Rp.21000"<<endl;
    cout<<"2.Ayam goreng 	Rp.17000"<<endl;
    cout<<"3.Udang goreng 	Rp.19000"<<endl;
    cout<<"4.Cumi goreng 	Rp.20000"<<endl;
    cout<<"5.Ayam bakar	Rp.25000"<<endl;


	cout<<"Masukkan nama pembeli: ";cin>>nama_pembeli;
    cout<<"Masukan Jumlah Beli :";
    cin>> jumlah_beli; //pembeli dan jumlah barang yang di beli.

    for (int i=0;i<jumlah_beli;i++){
        cout<<"\nMasukan Makanan ke- "<<i+1<<"\n\n";
        cout<<"Nama Makanan : ";
        cin>>nama_barang[i]; //input nama barang yang dibeli

        cout<<"Jumlah  : ";
        cin>>jumlah[i]; //input jumlah barang yang di beli

        cout<<"Harga  : ";
        cin>>harga[i]; //input harga perbarang

        total[i] = jumlah[i]*harga[i]; //jumlah harga total barang
        total_semua += total[i]; // menjumlahkan seluruh total barang

    }
    cout<<"\n===============";
    cout<<"\nCatatan Belanja";
    cout<<"\n===============";

    cout<<"\nNo Barang  Jumlah Harga Total\n";
    for (int i=0; i<jumlah_beli; i++ ){
        cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<total[i]<<endl;
    }
    //percabangan ongkir
	cout<<"Masukkan Jarak rumah: ";cin>>jarak;
	if(jarak==0){
    delivery=0;
  	}else if(jarak<=3){
    delivery=15000;
  	}else{
    delivery=25000;
  	}
    //percabangan kondisi diskon
     if(total_semua>=150000){
        diskon=(0.35*total_semua)+8000;
    }else if(total_semua>= 50000){
        diskon=(0.15*total_semua)+5000;
    }else if(total_semua>= 25000){
        diskon=3000;
	}else{
        diskon=0;
    }

	total_bayar=total_semua+delivery;
    cout<<"Jumlah Bayar : Rp."<<total_bayar<<endl;
    cout<<"Diskon : Rp."<<diskon<<endl;
    cout<<"Total Bayar : Rp."<<total_bayar - diskon<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    cout<<"Kembalian : Rp."<<(bayar-(total_bayar-diskon))<<endl;
    return 0;
}

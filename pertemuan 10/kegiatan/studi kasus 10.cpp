#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
using namespace std;

class pointer{
      public:
      	void pilih();
        void input();
        void tambah_depan();
        void tambah_belakang();
        void output();

      private:
        int pil;
        struct simpul{
          char nim[10], nama[80];
          struct simpul *next;
        }
        mhs, *baru, *awal=NULL, *akhir=NULL, *hapus, *bantu;
  
    };
void clrscr(){
 system("cls");
}

void pointer::pilih(){
  do{
  //clrscr();
  cout << "MENU SINGLE  LINKEDLIST" << endl;
  cout << "1. Tambah Depan" << endl;
  cout << "2. Tambah Belakang" << endl;
  cout << "3. Tampil" << endl;
  cout << "4. Selesai" << endl;
  cout << "Pilihan anda: ";
  cin>>pil;
  
 if(pil==1){
  tambah_depan();
 }
 else if(pil==2){
  tambah_belakang();
 }
 else if(pil==3){
  output();
 }}while (pil!=4);
 cout<<"Program telah selesai";
}



void pointer::input(){
 baru=(simpul*)malloc(sizeof(struct simpul));
 cout << "Input NIM : ";
 cin >> baru->nim;
 cout << "Input Nama : ";
 cin >>baru->nama;
 baru->next=NULL;
}
  


void pointer::tambah_depan(){
	input();
 if(awal==NULL){
  awal=baru;
  akhir=baru;
  akhir->next=NULL;
 }
 else{
  baru->next=awal;
  awal=baru;
 }
 cout << endl << endl;
 output();
}

void pointer::tambah_belakang(){
 input();
 if(awal==NULL){
  awal=baru;
 }
 else{ 
  akhir->next=baru;
 }
 akhir=baru;
 akhir->next=NULL;
 cout << endl << endl;
 output();
}

void pointer::output(){
if(awal==NULL){
  cout << "Kosong";
 }
 else{
  bantu=awal;
  while(bantu!=NULL){
  cout << "NAMA : " << bantu->nama << endl;
  cout << "NIM : " << bantu->nim << endl;
     bantu=bantu->next;
  }
 }
 getch();
}



int main(){
	int pil;
	pointer x;
	x.pilih(); 
 
 return 0;
}

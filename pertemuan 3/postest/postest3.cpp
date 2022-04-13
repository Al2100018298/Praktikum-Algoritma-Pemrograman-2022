#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int x,y,pangkat,i;
	cout<<"-------------------------------";
	cout<<"\nProgram Untuk Menghitung Bilangan Berpangkat";
	cout<<"\n\nMasukkan x (bilangan real) : ";
		cin>>x;
	cout<<"Masukkan y (bilangan bulat): ";
		cin>>y;
	pangkat=pow(x,y);
	cout<<"\n\nHasil dari x (bilangan real) pangkat y (bilangan bulat) : "<<pangkat;
	return 0;
}

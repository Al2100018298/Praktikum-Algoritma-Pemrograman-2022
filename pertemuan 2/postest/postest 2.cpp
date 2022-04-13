#include <iostream>
using namespace std;

int main(){
  int tahun;

  cout << "Masukkan tahun yang diinginkan: ";
  cin >> tahun;

  if (tahun %400 == 0){
    	cout << tahun << " Termasuk Tahun Kabisat\n";
  	} 
  	else if(tahun %100 == 0){
    	cout << tahun << " Tidak Termasuk Tahun Kabisat\n";
  	} 
  	else if(tahun %4 == 0){
    	cout << tahun << " Termasuk Tahun Kabisat\n";
  	} 
  	else {
    	cout << tahun << " Tidak Termasuk Tahun kabisat\n";
  	}
  return 0;
}

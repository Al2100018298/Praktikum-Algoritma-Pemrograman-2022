#include <iostream>
#include <string>
using namespace std;

void rekursif (int n) {
   int jumlah, i;
   jumlah =0;
   i =1;
   	while (!(n<i)) {
      	if (i % 2==0) {
        	jumlah =jumlah-1/i;
        	cout << "-1/"<<i << endl;      
		}
      	else{
        	jumlah =jumlah+1/i;
        	cout << "+1/"<<i << endl;     
		}
     	i =i+1;
     	cout << "total:"<<jumlah << endl;
   	}

}
   
int main(){
	string raptor_prompt_variable_zzyz;
   	int n, jumlah;
   	raptor_prompt_variable_zzyz ="masukan batas:";
 	cout << raptor_prompt_variable_zzyz << endl;
 	cin >> n;
 	rekursif(n);
	cout << "total:"<<jumlah << endl;
   	return 0;
}

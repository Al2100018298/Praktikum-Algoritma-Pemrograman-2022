#include<iostream>
using namespace std;

class Bilangan 
	 {
		private:
			int x, y;
		public:
			Bilangan() {x=1; y=100;}
			int Iteratif(int x, int y);
	};
int Bilangan::Iteratif(int x, int y){
	for(x; x<=y; x++) {
		if (x%5==0 && x%7==0) {
			cout << "Hasil : " << x << endl;
		}
	}
	return x;
}	

int main() {
	Bilangan z;
	z.Iteratif(1, 100);
	return 0;
}	

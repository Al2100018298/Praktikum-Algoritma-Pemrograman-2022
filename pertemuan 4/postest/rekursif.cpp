#include <iostream>
#include <string>
 
using namespace std;
 
class cetak{
      public:
             cetak();
             int proses(int a);
      private:
              int a;
      };
       
cetak::cetak(){}
 
int cetak::proses (int a){
    if (a>100){
    }else
    {
    if (a % 5==0 && a % 7==0)
    {
    cout << a << endl;}
    else
    {}proses(a+1);
    }
    }
int main(){
 
   cetak flow;
   flow.proses(1);
    
   system("pause");
   return 0;
}
#include <iostream>
using namespace std;

int NP (int num) {
    int i;
    int div=0;
    //div= numero de divisores de num
    for (i = 1; i <= num; i++)

    if (num%i==0) {
        div++;
    }
    return div;}

   int main() {
       int num;
       bool a;
       cin >> num;
       if (NP(num) == 2) {
           cout << "numero primo" << endl;
       } else {
           cout << "numero non primo" << endl;
       }
       return 0;
   }

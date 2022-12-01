#include <iostream>
#include "lib.h"
using namespace std;



   int main() {
       int num;
       cin >> num;
       if (NP(num) == 2) {
           cout << "numero primo" << endl;
       } else {
           cout << "numero non primo" << endl;
       }
       return 0;
   }

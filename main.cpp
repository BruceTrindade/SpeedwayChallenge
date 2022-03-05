#include <iostream>
#include <math.h>
using namespace std;


int main() {
  
  int c, n;
  bool continua = true;

  while (continua)
  {
       cin >> c;
       cin >> n;
       if ((c <= 1 || c >= pow(10,8)) || ((n <= 1 || n >= 100)) )
       {
           cout << "Number not accepted, please try again" << endl;
       } else {
            continua = false;
            cout << c%n;
       }
    
  }
  
  return 0;

}
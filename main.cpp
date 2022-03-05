#include <iostream>
using namespace std;

int main() {
  
  int c, n;
  
  cin >> c;
  cin >> n;
  
  cout << "Ponto de finalizacao da corrida: " << (c%n);
  
  return 0;
}
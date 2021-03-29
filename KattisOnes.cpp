#include <iostream>
using namespace std;
int main(){
  long long a;
  while(cin >> a){
    unsigned int ones = 1;
    unsigned long long LENGTH = 1;
    while(LENGTH % a != 0){
      LENGTH *= 10;
      ++LENGTH;
      LENGTH = LENGTH % a;
      ++ones;
      }
      cout << ones << endl;
    }
}
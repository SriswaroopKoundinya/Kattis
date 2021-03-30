#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int count = 3;
  if(n == 1){
    cout << 9 << endl;
  }
  else{
    for(int i = 1; i < n; ++i){
      count = (count*2)-1;
    }
    cout << count * count;
  }
}
#include <iostream>
using namespace std;
int main() {
  int H, m;
  cin >> H >> m;
  if(m >= 45){
    m -= 45;
    cout << H << " " << m;
  }
  else{
    int MARGIN = 45-m;
    m = 60-MARGIN;
    if (H == 0){
      H = 23;
    }
    else{
      --H;
    }
    cout << H << " " << m;
  }
}
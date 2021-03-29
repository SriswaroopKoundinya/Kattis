#include <iostream>
using namespace std;
int main() {
  int n, T;
  cin >> n >> T;
  int ARRAY[n];
  for(int i = 0; i < n; ++i){
    cin >> ARRAY[i];
  }
  int count = 0;
  for(int j = 0; j < n; ++j){
    if(T >= ARRAY[j]){
      T = T - ARRAY[j];
      ++count;
      if(j == (n-1)){
        cout << count << endl;
      }
    }
    else{
      cout << count << endl;
      break;
    }
  }
}
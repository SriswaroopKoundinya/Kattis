#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int pieces[6];
  for(int i = 0; i < 6; ++i){
    cin >> pieces[i];
  }
  int c_pieces[6] = {1, 1, 2, 2, 2, 8};
  for(int j = 0; j < 6; ++j){
    if(j != 5){
      cout << c_pieces[j] - pieces[j] << " ";
    }
    else{
      cout << c_pieces[j] - pieces[j];
    }
}
}
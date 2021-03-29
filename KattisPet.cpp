#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int score  = -2;
  int row = -1;
  for(int i = 0; i < 5; ++i){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if ((a+b+c+d) > score){
      score = (a+b+c+d);
      row = (i+1);
    }
  }
  cout << row << " " << score;
}
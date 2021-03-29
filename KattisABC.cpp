#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int A, B, C;
  cin >> A;
  cin >> B;
  cin >> C;
  string INPUT;
  cin.ignore();
  getline(cin, INPUT);
  int ARRAY[3] = {A, B, C};
  int oarray[3];
  for(int i = 0; i < 3; ++i){
    if (INPUT[i] == 'A'){
      oarray[i] = *min_element(ARRAY, ARRAY+3);
    }
    else if(INPUT[i] == 'C'){
      oarray[i] = *max_element(ARRAY, ARRAY+3);
    }
    else{
      sort(ARRAY, ARRAY+3);
      oarray[i] = ARRAY[1];
    }
  }
  for(int j = 0; j < 3; ++j){
    if(j < 2){
      cout << oarray[j] << " ";
    }
    else{
      cout << oarray[j];
    }
  }
}
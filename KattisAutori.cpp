#include <iostream>
using namespace std;
int main(){
  string INPUT;
  getline(cin, INPUT);
  for(int i = 0; i < INPUT.length(); ++i){
	  if(i == 0){
	    cout << INPUT[i];
	  }
	  else if(INPUT[i] == '-'){
	    cout << INPUT[i+1]; 
	  }
  }
}
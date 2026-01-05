#include <bits/stdc++.h>
using namespace std;

void A(){
  int d,f;
  cin >> d >> f;
  int n = 0;
  int result;
  while(true){
    if( f + 7 * n > d ){
      result = f + 7 * n - d;
      break;
    }
    n++;
  }
  cout << result << endl;
}



void B(){
  
}


int main(){
  A();
  return 0;
}
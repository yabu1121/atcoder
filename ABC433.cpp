#include <bits/stdc++.h>
using namespace std;

void A(){
  int x,y,z;
  cin >> x >> y >> z;
  bool flag = false;

  for(int i = 0; i < 200; i++){
    if((x + i) == (y + i) * z){
      flag = true;
      break;
    }
  }
  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;
}

int main(){
  A();
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

void A(){
  int x,y,z;
  cin >> x >> y >> z;
  bool flag = false;
  while(x < 100 && y < 100){
    if(x == y * z) {
      flag = true;
      break;
    };
    x++;
    y++;
  }

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;
}

int main(){
  A();
  return 0;
}
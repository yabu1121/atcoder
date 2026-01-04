#include <bits/stdc++.h>
using namespace std;

void A(){
  int w,b;
  cin >> w >> b;
  int n = 0;
  while(n * b <= w * 1000){
    n++;
  }
  cout << n << endl;
}

int main(){
  A();
  return 0;
}
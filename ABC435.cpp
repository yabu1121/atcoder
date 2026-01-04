#include <bits/stdc++.h>
using namespace std;

int sigma(int num){
  if(num == 1)return 1;
  return num + sigma(num - 1);
}

void A(){
  int n;
  cin >> n;
  cout << sigma(n) << endl;
}

int main(){
  A();
  return 0;
}
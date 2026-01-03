#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if (a <= c){
    if(b <= d) cout << "No" << endl;
    else cout << "Yes" << endl;
  }else cout << "No" << endl;
  return 0;
}
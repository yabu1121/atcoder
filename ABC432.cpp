#include <bits/stdc++.h>
using namespace std;

void A(){
  int a,b,c;
  cin >> a >> b >> c;
  int maxint = max(max(a,b),c);
  int minint = min(min(a,b),c);
  int center;
  if (a == maxint){
    if(b == minint){
      center = c;
    }
    if(c == minint){
      center = b;
    }
  }
  if (b == maxint){
    if(a == minint){
      center = c;
    }
    if(c == minint){
      center = a;
    }
  }
  if (c == maxint){
    if(b == minint){
      center = a;
    }
    if(a == minint){
      center = b;
    }
  }
  cout << maxint << center << minint << endl;
}

int main(){
  A();
  return 0;
}
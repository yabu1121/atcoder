#include <bits/stdc++.h>
using namespace std;

void A(){
  int h;
  int b;
  cin >> h >> b;
  if(h > b)cout << h - b << endl;
  else cout << 0 << endl;
}



void B(){
  int x, n;
  cin >> x >> n;
  vector<int> w(n);
  for(int i = 0; i < n; i++){
    cin >> w.at(i);
  }
  int q;
  cin >> q;
  vector<int> p(q);
  for(int i = 0; i < q; i++){
    cin >> p.at(i);
  }

  vector<bool> attach(n);
  for(int i = 0; i < n; i++){
    attach.at(i) = false;
  }

  for(int i = 0; i < q; i++){
    int num = p.at(i) - 1;
    if(attach.at(num)){
      x -= w.at(num);
      attach.at(num) = false;
    }else{
      x += w.at(num);
      attach.at(num) = true;
    }
    cout << x << endl;
  }
}

int main(){
  B();
  return 0;
}
//
// Created by Kylian Lee on 2021/08/11.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void solution(int days, int mochies);

int main(){
  int days, mochies;
  cin >> days >> mochies;
  solution(days, mochies);
  return 0;
}

void solution(int days, int mochies){
  v.resize(days);
  v[0] = 1, v[1] = 1;
  for (int i = 2; i < days; ++i)
    v[i] = v[i - 1] + v[i - 2];
  int a = v[days - 3], b = v[days - 2];
  int y = mochies / b + 1;
  int x;
  while(--y > 0){
    int temp = mochies - b * y;
    if(temp % a == 0){
      x = temp / a;
      break;
    }
  }
  cout << x << endl << y << endl;
}

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <map>

#define REP(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
  // size
  // push_back
  vector<int> v(10, -1); // size, 初期値
  map<string, string> m;
  m["aa"] = "aa";
  m.insert(pair<string, string>("a", "bbb"));
  int result = count(v.begin(), v.end(), -1);
}


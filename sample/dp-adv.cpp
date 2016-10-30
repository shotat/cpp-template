
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#define REP(i,n) for(int i=0;i<n;i++)
#define PII pair<int, int>

using namespace std;

#define MAX_N 100
#define MAX_W 10000

/*
 * define global variables here.
 */
int N, W;
vector<PII> items;
vector<vector<int>> memo;

void solve();
void setup();

int main()
{
  setup();
  solve();
  return 0;
}

// item... first => weight, second => value
int value(int i, int max_w) {
  if (memo[i][max_w] >= 0) { return memo[i][max_w]; }
  int res;
  if (i == N) { return 0; }

  PII item = items[i];
  int i_value = item.second;
  int i_weight = item.first;
  if (max_w < i_weight) { 
    res = value(i + 1, max_w);
  } else {
    res = max({
        value(i + 1, max_w),
        i_value + value(i + 1, max_w - i_weight),
        i_value + value(i, max_w - i_weight)
        });
  }
  return memo[i][max_w] = res;
}
void setup() {
  N = 3;
  W = 7;
  items.push_back(PII(3,4));
  items.push_back(PII(4,5));
  items.push_back(PII(2,3));
}

void solve() {
  memo = vector<vector<int>>(MAX_N + 1, vector<int>(MAX_W + 1, -1));
  cout << value(0, W) << endl;
}

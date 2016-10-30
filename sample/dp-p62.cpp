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
#define MAX_M 100

/*
 * define global variables here.
 */
int N, M;
vector<vector<int>> dp;

void solve();
void setup();

int main()
{
  setup();
  solve();
  return 0;
}

void setup() {
  // make io faster.
  cin.tie(0);
  ios::sync_with_stdio(false);

  /*
   * initialize global variables here.
   */

  /*
   * sample
   cin >> N >> M;
   field = vector<vector<bool>>(N, vector<bool>(M, false));
   REP(i, N) {
   string s;
   cin >> s;
   int len = s.length();
   REP(j, M) {
   if (s[j] == 'W') {
   field[i][j] = true;
   }
   }
   }
  */
}

void solve() {
  int N = 3;
  vector<vector<int>> dp = vector<vector<int>>(N, vector<int>(M, false));
  vector<int> A = vector<int>(N);
  vector<int> M = vector<int>(N);
  int K = 17;
  
  // dp[idx][sum]
  REP(idx, 999) {
  }
}


#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#define REP(i,n) for(int i=0;i<n;i++)
#define PII pair<int, int>

using namespace std;

#define MAX_N 1000
#define MAX_M 1000

/*
 * define global variables here.
 */
int N, M;
string s, t;
vector<vector<int>> dp;

void solve();
void setup();

int main()
{
  setup();
  solve();
  return 0;
}

int lcs(int s_idx, int t_idx) {
  // guard
  if (dp[s_idx][t_idx] >= 0) { return dp[s_idx][t_idx]; }
  if (s_idx >= N) { return 0; }
  if (t_idx >= M) { return 0; }
  
  // solve
  int res;
  if (s[s_idx] == t[t_idx]) {
     res = 1 + lcs(s_idx + 1, t_idx + 1);
  } else {
    res = max(
        lcs(s_idx, t_idx + 1),
        lcs(s_idx + 1, t_idx)
        );
  }
  return dp[s_idx][t_idx] = res;
}
void setup() {
  // make io faster.
  cin.tie(0);
  ios::sync_with_stdio(false);
  N = 4;
  M = 4;
  s = "abcd";
  t = "becd";

  /*
   * initialize global variables here.
   */

  dp = vector<vector<int>>(N + 1, vector<int>(M + 1, -1));
  /*
   * sample
   cin >> N >> M;
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
  cout << lcs(0,0) << endl;
  /*
   * answer is here.
   */
}

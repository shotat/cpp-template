// http://genkisugimoto.com/jp/blog/procon/2015/04/15/print-debug-technique-in-cpp.html
#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define PII pair<int, int>

// pair
template<typename T1, typename T2> ostream& operator<<(ostream& s, const pair<T1, T2>& p) {return s << "(" << p.first << ", " << p.second << ")";}

// vector
template<typename T> ostream& operator<<(ostream& s, const vector<T>& v) {
  int len = v.size();
  for (int i = 0; i < len; ++i) { s << v[i]; if (i < len - 1) s << "\t"; }
  return s;
}

// 2 dimentional vector
template<typename T> ostream& operator<<(ostream& s, const vector< vector<T> >& vv) {
  int len = vv.size();
  for (int i = 0; i < len; ++i) { s << vv[i] << endl; }
  return s;
}

// map
template<typename T1, typename T2> ostream& operator<<(ostream& s, const map<T1, T2>& m) {
  s << "{" << endl;
  for (auto itr = m.begin(); itr != m.end(); ++itr) {
    s << "\t" << (*itr).first << " : " << (*itr).second << endl;
  }
  s << "}" << endl;
  return s;
}


int main(int argc, char** argv) {
  PII p = make_pair(1, 2);
  PII p2(1, 2);
  vector<int> v(10, -4);
  vector< vector<int> > vv(5, vector<int>(3, -10));
  cout << v << endl;
  cout << vv << endl;
  cout << p << endl;
  return 0;
}

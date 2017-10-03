#include <deque>
#include <fstream>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  ifstream fin;
  ofstream fout;
  fin.open(argv[1]);
  fout.open(argv[2]);
  if (!fin) {
    cerr << "File could not be opened" << endl;
    return 0;
  }
  stack<deque<string>> mystack;
  queue<deque<string>> myqueue;
  deque<string> deque1;
  deque<string> deque2;
  string cur;
  while (!fin.eof()) {
    getline(fin, cur);
    cout << cur << endl;
  }
  fin.close();
  fout.close();
  return 0;
}

#include <iostream>
#include <list>
using namespace std;

int main() {
  list <int> l = {1,2};
  auto it = l.begin();
  advance(it, 1);
  cout<<*it;
  return 0;
}
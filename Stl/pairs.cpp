#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
  // Normal pair
  pair <int, int> p = {1,2};
  cout << p.first << endl;
  cout << p.second << endl;

  // pair inside pair
  pair <int, pair<int, int>> p2 = {1,{1,16}};
  cout<<p2.second.second<<endl;


  // Array in a pair
  pair <int, int> arr[] = {{8,17}, {2,8}, {3,7}};
  cout<<arr[1].second;
  return 0;
}
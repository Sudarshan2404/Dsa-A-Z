#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s;
  // Stack is LIFO (Last in first Out)
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  cout<< s.size()<<endl; //Returns size of a stack
  cout<< s.top()<<endl;  // prints the top element
  s.pop(); // removes the top element
  cout<< "New top element" <<s.top()<<endl;
  cout<< s.empty(); //prints if an array is empty

  return 0;
}
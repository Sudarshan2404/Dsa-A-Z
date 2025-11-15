#include <iostream>
#include <vector> //imports only vectors from stl
#include <bits/stdc++.h> //include whole stl
using namespace std;

int main() {
  vector <int> v = {1,2,3,4,5,6};
  cout<<"Og Vector:- ";
  for(int i=0; i<v.size(); i++ ){
    cout << v[i] << ", ";
  }
  cout<<endl;
  // insert an element at the desired position in a vector
  v.insert(v.end(), 7);
  cout<<"Vector after inserting 7 at the end:- ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ", ";
  }
  cout<<endl;

  // delete the element at the end of a vector
  v.pop_back();
  cout<<"Vector after removing an elemnt at the end:- ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ", ";
  }
  cout<<endl;

  //  push an element at the end of the vector
  v.push_back(8);
  cout << "Vector after adding an elemnt at the end:- ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ", ";
  }
  cout<<endl;

  // Get an element using the at keyword
  cout<<"Elemtnt at pos 1:- "<< v.at(1)<<endl;

  //itereator
  vector<int> ::iterator it = v.begin()+1;
  cout<<"Using Itereator:- "<<*it<<endl;

  // remove an element in a vector from a particular position
  v.erase(v.begin()+2);
  cout<<"Vector after removing an element at pos 2:- ";
  for (int i = 0; i < v.size(); i++){
    cout << v[i] << ", ";
  }
  cout<<endl;
  return 0;
}
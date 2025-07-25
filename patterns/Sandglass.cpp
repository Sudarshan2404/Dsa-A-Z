#include <iostream>
using namespace std;

int main(){
  int n=10;
  for(int i=n/2; i>0; i--){
    for(int j=0; j<n-i-1; j++){
      cout<<" ";
    }
     for(int j=0; j<2*i-1; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=2; i<=n/2; i++){
    for(int j=0; j<n-i-1; j++){
      cout<<" ";
    }
     for(int j=0; j<2*i-1; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
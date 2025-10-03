#include <vector>
#include <iostream>
#include <climits>
using namespace std;



int main(){
  vector<int> nums = {15,38,97,58};

  int max = INT_MIN;
  for(int i=0; i<nums.size(); i++){
    if(nums[i] > max){
      max = nums[i];
    }
  }

  cout<<"The Largest number in vector is "<<max;
  return 0;
}

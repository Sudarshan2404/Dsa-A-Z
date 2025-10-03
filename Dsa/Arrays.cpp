#include <vector>
#include <iostream>
#include <climits>
using namespace std;

int main()
{
  vector<int> nums = {15, 38, 58, 97, 97, 98};

  int max = INT_MIN;
  for (int i = 0; i <= nums.size(); i++)
  {
    if (nums[i] > max)
    {
      max = nums[i];
    }
  }

  cout << "The Largest number in vector is " << max << endl;

  // Check if an array is sorted or not
  int sorted = true;
  for (int i = 0; i < nums.size() - 1; i++)
  {
    if (nums[i] > nums[i + 1])
    {
      sorted = false;
    }
  }

  if (sorted)
  {
    cout << "Array is sorted";
  }
  else
  {
    cout << "array is not sorted";
  }
  return 0;
}

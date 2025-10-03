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
    cout << "Array is sorted" << endl;
  }
  else
  {
    cout << "array is not sorted" << endl;
  }

  // Reverse an array

  int a = 0;
  int b = nums.size() - 1;

  while (a < b)
  {
    swap(nums[a], nums[b]);
    a++;
    b--;
  }

  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << ", ";
  }
  cout << endl;

  // Check if ant two pairs gets the target

  vector<int> sornum = {1, 5, 4, 8, 9};
  int size = sornum.size();
  int i = 0;
  int j = size - 1;

  int target = 87;
  int found = false;
  while (i < j)
  {
    while (i < j)
    {
      if (sornum[i] + sornum[j] == target)
      {
        found = true;
        break;
      }
      j--;
    }
    i++;
  }
  if (!found)
  {
    cout << "false";
  }
  else
  {
    cout << "true";
  }
  return 0;
}

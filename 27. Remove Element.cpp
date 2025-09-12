class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int st = -1;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == val)
      {
        st = i;
        break;
      }
    }
    if (st == -1)
      return nums.size();
    for (int j = st + 1; j < nums.size(); j++)
    {
      if (nums[j] != nums[st])
      {
        swap(nums[j], nums[st]);
        st++;
      }
    }

    return st;
  }
};
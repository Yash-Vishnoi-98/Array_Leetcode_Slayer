class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int st = 0;
    int i = 0;
    for (i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 0)
      {
        st = i;
        break;
      }
    }
    if (i == nums.size())
      return;
    for (int j = st + 1; j < nums.size(); j++)
    {
      if (nums[j] != 0)
      {
        swap(nums[st], nums[j]);
        st++;
      }
    }
  }
};
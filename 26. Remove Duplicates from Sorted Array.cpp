int removeDuplicates(vector<int> &nums)
{
  int st = 0;
  int end = nums.size() - 1;
  for (int i = st + 1; i < nums.size(); i++)
  {
    if (nums[i] != nums[st])
    {
      st++;
      swap(nums[st], nums[i]);
    }
  }
  return st + 1;
}
class Solution
{
public:
  int thirdMax(vector<int> &nums)
  {
    int maxifirst = INT_MIN, maxisecond = INT_MIN, maxithird = INT_MIN;
    for (auto it : nums)
    {
      maxifirst = max(maxifirst, it);
    }
    for (auto it : nums)
    {
      if (it < maxifirst)
      {
        maxisecond = max(maxisecond, it);
      }
    }
    bool flag = false;
    for (auto it : nums)
    {
      if (it < maxisecond)
      {
        maxithird = max(maxithird, it);
        flag = true;
      }
    }
    return maxithird == INT_MIN && !flag ? maxifirst : maxithird;
  }
};
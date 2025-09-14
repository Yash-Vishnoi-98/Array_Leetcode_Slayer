class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int maxiSum = INT_MIN;
    int maxicurrsum = 0;
    for (auto it : nums)
    {
      maxicurrsum = max(maxicurrsum + it, it);
      maxiSum = max(maxiSum, maxicurrsum);
    }
    return maxiSum;
  }
};
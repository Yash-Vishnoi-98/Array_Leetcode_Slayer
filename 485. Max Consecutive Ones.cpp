class Solution
{
public:
  int findMaxConsecutiveOnes(vector<int> &nums)
  {
    int cnt = 0, n = nums.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
      int ele = nums[i];
      if (ele == 1)
      {
        cnt++;
      }
      else
      {
        cnt = 0;
      }
      maxi = max(maxi, cnt);
    }
    return maxi;
  }
};
class Solution
{
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k)
  {
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
      int curr = nums[i];
      if (mp.find(curr) == mp.end())
      {
        mp[curr] = i;
      }
      else
      {
        int idx = abs(mp[curr] - i);
        if (idx <= k)
        {
          cout << idx << endl;
          return true;
        }
        else
        {
          mp[curr] = i;
        }
      }
    }
    return false;
  }
};
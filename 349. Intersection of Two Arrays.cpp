class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_map<int, bool> mp;
    for (auto it : nums1)
    {
      mp[it] = true;
    }
    vector<int> ans;
    for (auto it : nums2)
    {
      if (mp.find(it) != mp.end() && mp[it] == true)
      {
        ans.push_back(it);
        mp[it] = false;
      }
    }
    return ans;
  }
};

// 2nd sol

class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0;
    int j = 0;
    vector<int> ans;
    int n = nums1.size(), m = nums2.size();
    while (i < n && j < m)
    {
      if (nums1[i] == nums2[j])
      {
        if (ans.empty() || ans.back() != nums1[i])
        {
          ans.push_back(nums1[i]);
        }
        i++;
        j++;
      }
      else if (nums1[i] < nums2[j])
      {
        i++;
      }
      else
      {
        j++;
      }
    }
    return ans;
  }
};

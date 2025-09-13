class Solution
{
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_map<int, int> mp;
    for (auto it : nums1)
    {
      mp[it]++;
    }
    vector<int> ans;
    for (auto it : nums2)
    {
      if (mp.find(it) != mp.end() && mp[it] != 0)
      {
        ans.push_back(it);
        mp[it]--;
      }
    }
    return ans;
  }
};

class Solution
{
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
  {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int n = nums1.size(), m = nums2.size();
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
      if (nums1[i] < nums2[j])
      {
        i++;
      }
      else if (nums1[i] > nums2[j])
      {
        j++;
      }
      else
      {
        ans.push_back(nums1[i]);
        i++;
        j++;
      }
    }

    return ans;
  }
};
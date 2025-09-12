class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    int l = m - 1;
    int r = 0;
    while (l >= 0 && r < n)
    {
      if (nums1[l] <= nums2[r])
      {
        break;
      }
      else
      {
        swap(nums1[l], nums2[r]);
        l--;
        r++;
      }
    }

    sort(nums1.begin(), nums1.begin() + m);
    sort(nums2.begin(), nums2.end());
    int idx = 0;
    for (int i = m; i < m + n; i++)
    {
      nums1[i] = nums2[idx];
      idx++;
    }
  }
};
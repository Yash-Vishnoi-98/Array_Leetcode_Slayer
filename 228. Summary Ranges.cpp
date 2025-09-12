class Solution
{
public:
  vector<string> summaryRanges(vector<int> &nums)
  {

    vector<string> ans;
    string str = "";
    int n = nums.size();
    if (n == 0)
      return ans;

    int st = nums[0];
    int end = nums[0];

    for (int i = 1; i < n; i++)
    {
      if (nums[i - 1] + 1 != nums[i])
      {
        if (st == end)
        {
          str = to_string(st);
          ans.push_back(str);
        }
        else
        {
          str = (to_string(st)) + "->" + (to_string(nums[i - 1]));
          ans.push_back(str);
        }
        cout << i << "-->" << nums[i] << endl;
        st = nums[i];
      }
      end = nums[i];
    }

    if (st == end)
    {
      str = to_string(st);
      ans.push_back(str);
    }
    else
    {
      str = (to_string(st)) + "->" + (to_string(nums[n - 1]));
      ans.push_back(str);
    }

    return ans;
  }
};
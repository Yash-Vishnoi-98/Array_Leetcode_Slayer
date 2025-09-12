vector<int> twoSum(vector<int> &arr, int target)
{
  unordered_map<int, int> mp;
  for (int i = 0; i < arr.size(); i++)
  {
    mp[arr[i]] = i;
  }
  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    int rem = target - arr[i];
    if (mp.find(rem) != mp.end() && mp[rem] != i)
    {

      return {i, mp[rem]};
    }
  }
  return {-1, -1};
}
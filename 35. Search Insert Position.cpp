int searchInsert(vector<int> &arr, int target)
{
  int st = 0;
  int ans = arr.size();
  int e = arr.size() - 1;
  while (st <= e)
  {
    int mid = (st + e) / 2;
    if (arr[mid] >= target)
    {
      ans = mid;
      e = mid - 1;
    }
    else
    {
      st = mid + 1;
    }
  }
  return ans;
}
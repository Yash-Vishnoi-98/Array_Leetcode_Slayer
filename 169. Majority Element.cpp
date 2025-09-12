class Solution
{
public:
  int majorityElement(vector<int> &arr)
  {
    int ele = arr[0], cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
      if (ele == arr[i])
      {
        cnt++;
      }
      else if (cnt == 0)
      {
        ele = arr[i];
        cnt = 1;
      }
      else
      {
        cnt--;
      }
    }
    return ele;
  }
};
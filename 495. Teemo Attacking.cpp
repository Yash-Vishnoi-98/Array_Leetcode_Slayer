class Solution
{
public:
  int findPoisonedDuration(vector<int> &timeSeries, int duration)
  {
    int total = 0, n = timeSeries.size();
    for (int i = 0; i < n; i++)
    {
      int check = timeSeries[i] + duration - 1;
      if (i + 1 < n && check >= timeSeries[i + 1])
      {
        total += timeSeries[i + 1] - timeSeries[i];
      }
      else
      {
        total += duration;
      }
    }
    return total;
  }
};
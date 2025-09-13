class Solution
{
public:
  int findContentChildren(vector<int> &g, vector<int> &s)
  {
    sort(s.begin(), s.end());
    sort(g.begin(), g.end());
    int cnt = 0;
    int n = g.size();
    int m = s.size();
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
      if (s[j] >= g[i])
      {
        cnt++;
        i++;
        j++;
      }
      else
      {
        j++;
      }
    }
    return cnt;
  }
};
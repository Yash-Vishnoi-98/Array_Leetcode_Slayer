class Solution
{
public:
  long long ncr(int n, int r)
  {
    long long res = 1;

    for (int i = 0; i < r; i++)
    {
      res *= (n - i);
      res /= (i + 1);
    }
    return res;
  }

  vector<int> getRow(int rowIndex)
  {
    vector<int> temp;
    int i = rowIndex;
    temp.push_back(1);
    for (int j = 1; j <= i; j++)
    {
      temp.push_back(ncr(i, j));
    }
    return temp;
  }
};
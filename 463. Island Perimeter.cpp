class Solution
{
public:
  int islandPerimeter(vector<vector<int>> &grid)
  {
    int cnt = 0;
    int n = grid.size();
    int m = grid[0].size();

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (grid[i][j] == 1)
        {
          for (int k = 0; k < 4; k++)
          {
            int newx = i + dx[k];
            int newy = j + dy[k];
            if ((newx >= n || newy >= m || newx < 0 || newy < 0))
            {
              cnt++;
              continue;
            }
            if (grid[newx][newy] == 0 && grid[i][j] == 1)
            {
              cnt++;
            }
          }
        }
      }
    }
    return cnt;
  }
};
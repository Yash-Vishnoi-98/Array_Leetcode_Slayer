string longestCommonPrefix(vector<string> &strs)
{
  int n = strs[0].size();
  int i = 0;
  int j = 0;
  string str = "";
  int end = strs.size() - 1;
  sort(strs.begin(), strs.end());
  while (i < n)
  {
    if (strs[0][i] == strs[end][j])
      str += strs[0][i++];
    else
      break;
    j++;
  }
  return str;
}
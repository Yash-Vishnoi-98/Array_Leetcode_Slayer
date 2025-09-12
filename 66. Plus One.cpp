class Solution
{
public:
  vector<int> plusOne(vector<int> &digits)
  {

    int n = digits.size();
    int currsum = digits[n - 1] + 1;
    if (currsum <= 9)
    {
      digits[n - 1] = digits[n - 1] + 1;
      return digits;
    }

    vector<int> ans;
    int carry = 0;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
      int currsum = 0;
      if (i == digits.size() - 1)
        currsum = carry + digits[i] + 1;
      else
        currsum = carry + digits[i];
      ans.push_back(currsum % 10);
      carry = currsum / 10;
    }
    if (carry)
    {
      ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
TreeNode *rec(TreeNode *curr, int st, int end, vector<int> &nums)
{
  if (st > end)
    return NULL;
  int mid = (end + st) / 2;
  TreeNode *root = new TreeNode(nums[mid]);
  root->left = rec(root, st, mid - 1, nums);
  root->right = rec(root, mid + 1, end, nums);
  return root;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
  int n = nums.size();
  return rec(NULL, 0, n - 1, nums);
}
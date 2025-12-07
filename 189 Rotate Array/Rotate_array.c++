class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> nums1(n);
        for (int i = 0; i < nums.size(); i++)
        {
            nums1[(k + i) % nums.size()] = nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
           //hello
            nums[i] = nums1[i];
        }
    }
};

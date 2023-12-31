
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>um;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int comp = target - nums[i];
            if (um.count(comp)) {
                return {um[comp], i};
            }
            um[nums[i]] = i;
        }

        return {};
    }
};
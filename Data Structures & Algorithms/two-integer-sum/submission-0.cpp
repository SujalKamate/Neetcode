class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int index = 0; index < nums.size(); index++) {
            int needed = target - nums[index];

            if (seen.find(needed) != seen.end()) {
                return {seen[needed], index};
            }

            seen[nums[index]] = index;
        }

        return {};
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;  // value -> index
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            if (map.find(complement) != map.end()) {
                return {map[complement], i};  // Found the pair
            }
            
            map[nums[i]] = i;  // Store index of current element
        }
        
        return {};  // In case no solution is found (though problem says exactly one solution exists)
    }
};

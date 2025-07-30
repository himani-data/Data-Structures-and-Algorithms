// done

class Solution {
public:
//added
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int sec = target - first;

            if (m.find(sec) != m.end()) {
                return {m[sec], i};
            }

            m[first] = i;
        }

        return {};  // Empty vector if no solution found
    }
};

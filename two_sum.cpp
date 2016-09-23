// 16ms, beats 83%
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
	// one pass is enough 
        for (int i=0; i< nums.size();i++) {
            auto it = m.find(target-nums[i]);
            if(it!=m.end()){
                return vector<int>{it->second, i};
            }
            m[nums[i]]=i;
        }
        return vector<int>{};
    }
};

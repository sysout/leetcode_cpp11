class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0;
        for(auto x: nums){
            i^=x;
        }
        return i;
    }
};
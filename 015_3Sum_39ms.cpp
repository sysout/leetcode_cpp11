class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ret;
        for(int i(0),last(nums.size()-1),last_2(last-1);i<last_2;i++){
            int j(i+1),k(last);
            while(j<k){
                int b(nums[j]), c(nums[k]), sum=nums[i]+b+c;
                if(sum==0) ret.push_back({nums[i], nums[j], nums[k]});
                if(sum<=0) while(j<k && nums[j]==b) j++;
                if(sum>=0) while(j<k && nums[k]==c) k--;
            }
            while(i<last_2 && nums[i]==nums[i+1]) i++;
        }
        return ret;
    }
};

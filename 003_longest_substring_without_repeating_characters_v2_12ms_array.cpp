class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int N=s.size();
        int previous[256];
        fill_n(previous, 256, -1);
        int mx(0), last_rp(-1);
        for(int i(0);i<N;i++){
            // update pointer
            if(last_rp<previous[s[i]]){
                last_rp=previous[s[i]];
            }
            previous[s[i]]=i;
            mx=max(mx,i-last_rp);
        }
        return mx;
    }
};
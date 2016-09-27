class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int N=s.size();
        unordered_map<char,int> previous;
        int mx(0), last_rp(-1);
        for(int i(0);i<N;i++){
            auto it = previous.find(s[i]);
            if( it!=previous.end() ){
                // update pointer
                if(last_rp<it->second){
                    last_rp=it->second;
                }
            }
            previous[s[i]]=i;
            mx=max(mx,i-last_rp);
        }
        return mx;
    }
};
class Solution {
public:
    string reverseString(string s) {
        for(int lo=0,hi=s.size()-1;lo<hi;lo++,hi--){
            s[lo]^=s[hi];
            s[hi]^=s[lo];
            s[lo]^=s[hi];
        }
        return s;
    }
};
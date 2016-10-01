class Solution {
public:
    string longestPalindrome(string s) {
        int max(1), start(0);
        for(int i(1),len(s.size()-1);i<=len;i++){
            // case 1, odd
            int p_len(1);
            for(int j=1;i-j>=0 && i+j<=len;j++){
                if(s[i-j]==s[i+j]){
                    p_len+=2;
                }else{
                    break;
                }
            }
            if(max<p_len){
                max=p_len;
                start=i-p_len/2;
            }
            // case 2, even
            p_len=0;
            for(int lo(i-1),hi(i);lo>=0 && hi<=len;lo--,hi++){
                if(s[lo]==s[hi]){
                    p_len+=2;
                }else{
                    break;
                }
            }
            if(max<p_len){
                max=p_len;
                start=i-p_len/2;
            }
        }
        return s.substr(start, max);
    }
};

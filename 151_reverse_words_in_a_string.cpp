class Solution {
public:
    // two pass, not in place, too many edge cases, guly code
    void reverseWords(string &s) {
        int N=s.size();
        string s2(s);
        int hi=N-1;
        while(' '==s[hi] && hi>=0) hi--;
        int ct=0;
        // copy reversed s to s2 and delete space
        for(;hi>=0;){
            s2[ct++]=s[hi--];
            while(hi>0 && ' '==s[hi] && ' '==s[hi-1]) hi--;
            if(hi==0 && ' '==s[hi]) break;
        }
        // copy s2 back to s and do word reverse
        int lo=0;
        for(hi=0;hi<=ct;){
            if(ct==hi || ' '==s2[hi]){
                for(int i=0;i<hi-lo;i++){
                    s[lo+i]=s2[hi-i-1];
                }
                if(ct!=hi){
                    s[hi]=' ';
                }
                lo=hi+1;
                hi=hi+2;
            }else{
                hi++;
            }
        }
        s.resize(ct);
    }
};
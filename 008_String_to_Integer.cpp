class Solution {
public:
    int myAtoi(string str) {
        // whitespace
        auto it(str.begin());
        while(it!=str.end() && (' '==*it || '\t'==*it)){
            it++;
        }
        long result(0);
        int sign(1);
        if(it!=str.end()){
            if('-'==*it){
                sign=-1;
                it++;
            }else if('+'==*it){
                it++;
            }
        }
        for(;it!=str.end() && ('0'<=*it && '9'>=*it);it++){
            result=result*10+(*it-'0');
            if(result>INT_MAX){
                return (sign>0)?INT_MAX:INT_MIN;
            }
        }
        return result*sign;
    }
};

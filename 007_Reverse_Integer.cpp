class Solution {
public:
    int reverse(int x) {
        long ret(0);
        while(x!=0){
            ret=ret*10+x%10;
            x=x/10;
        }
        if(ret>INT_MAX || ret<INT_MIN){
            ret=0;
        }
        return ret;
    }
};

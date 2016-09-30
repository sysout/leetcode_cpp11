class Solution {
public:
    string convert(string s, int numRows) {
        if(1==numRows){
            return s;
        }
        int N=s.size();
        string result(s);
        int p=0;
        int steps = 2*numRows-2;
        int lastRowIdx=numRows-1;
        for(int i=0;i<numRows;i++){
            for(int j=i;j<N;j+=steps){
                result[p++]=s[j];
                if(i>0 && i<lastRowIdx){
                    int jj = j+(lastRowIdx-i)*2;
                    if(jj<N) result[p++]=s[jj];
                }
            }
        }
        return result;
    }
};
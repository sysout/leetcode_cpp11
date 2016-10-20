class Solution {
public:
    int romanToInt(string s) {
        // any of the letters representing numbers in the Roman numerical system: I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1,000. In this system, a letter placed after another of greater value adds (thus XVI or xvi is 16), whereas a letter placed before another of greater value subtracts (thus XC or xc is 90).
        if(s.length()==0){
            return 0;
        }
        int arr[128];
        arr['I']=1;
        arr['i']=1;
        arr['V']=5;
        arr['v']=5;
        arr['X']=10;
        arr['x']=10;
        arr['L']=50;
        arr['l']=50;
        arr['C']=100;
        arr['c']=100;
        arr['D']=500;
        arr['d']=500;
        arr['M']=1000;
        arr['m']=1000;
        int ret(arr[s[s.length()-1]]);
        for(int i=0, len(s.length()-1);i<len;i++){
            if(arr[s[i]]>=arr[s[i+1]]){
               ret+= arr[s[i]];
            }else{
               ret-= arr[s[i]];
            }
        }
        return ret;
    }
};

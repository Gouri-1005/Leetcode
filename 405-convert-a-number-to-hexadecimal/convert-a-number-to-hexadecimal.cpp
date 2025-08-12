class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";

        string hex="0123456789abcdef";
        unsigned int n=num;
        string result="";
        while(n>0){
            int remainder=n%16;
            result=hex[remainder]+result;
            n/=16;
        }
        return result;
    }
};
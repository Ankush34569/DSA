class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ex=num;
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                ex-=i;
            }
        }
        return ex==0?true:false;
    }
};
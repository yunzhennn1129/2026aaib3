//week03-2.cpp
//1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        for(int num : nums) {
            if(num<0) neg++;
            if(num==0) return 0;
        }
        if (neg%2==0) return 1;
        else return -1;
        //用錯誤方法寫一次
        //int ans = 1;
        //for(int num : nums) {
        //    ans *= num;
        //}
        //if (ans>0) return 1;
        //if (ans<0) return -1;
        //return 0;
    }
};

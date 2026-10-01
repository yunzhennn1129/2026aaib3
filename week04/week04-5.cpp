//week04-5.cpp 學習計畫Basic 第7題
//Leetcode 66. Plus One 加1 陣列當成數字, 加1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int N = digits.size();
        for (int i=N-1; i>=0; i--){
            int now = digits[i] + carry;
            carry = now / 10;
            digits[i] = now % 10;
       }
       if (carry>0) digits.insert(digits.begin(),carry);
       return digits;
    }
};

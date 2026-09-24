//week03-1.cpp 每日挑戰題 2026-09-24
//Leedcode 3550. Smallest Index With Digit Sum Equal to Index
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int total = 0;
            while (nums[i] > 0){
                total += nums[i] % 10;
                nums[i] = nums[i] / 10;
            }
            if (total == i) return i;
        }
        return -1; //不是,就-1
    }
};

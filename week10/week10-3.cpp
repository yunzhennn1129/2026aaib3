//week10-3.cpp
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;
        int M = salary[0], m=salary[0];
        for (int now : salary) {
            if(now > M) M = now;
            if(now < m) m = now;
            total += now;
        }
        return (total - M - m) / (salary.size() - 2);
        //return total / salary.size(); 錯,要扣掉最高薪、最低薪
    }
};

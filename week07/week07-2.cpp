//week07-2.cpp
//LeedCode682. Baseball Gamee
class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> a;
        for(string s : operations) {
            if (s=="+") { //把前2筆相加,塞到後面
                int now = a[a.size()-1] + a[a.size()-2];
                a.push_back( now );
            } else if (s=="D") { //把前1筆變2倍,塞到後面
                int now = a[a.size()-1] * 2;
                a.push_back( now );
            } else if (s=="C") { //把最後1筆移除
                a.pop_back(); //吐掉最後一筆
            } else  {   //把字串變整數,塞到後面
                int now = stoi(s);
                a.push_back( now );
            }
        }
        //把陣列所有資料加起來
        int ans = 0;
        for (int now : a)ans += now;
        return ans;
    }
};

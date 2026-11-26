//week12-1.cpp ¨C¤é¬D¾Ô2026-11-26
class Solution {
public:
    bool canAliceWin(int n) {
        for (int i=10; i>0; i--){
            n-= i;
            if (n<0){
                if (i%2==0) return false;
                else return true;
            }
        }
        return true;
    }
};

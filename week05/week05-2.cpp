//week05-2.cpp 學習計畫 Built-in Functions 第二題
// Leetcode 709.To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            if (isupper(s[i])) s[i] = s[i] - 'A' + 'a';
        }
        return s;
    }
};

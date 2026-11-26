//week12-3.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans = new ListNode(999);
        ListNode*now = ans;
        int carry = 0;
        //新版本
        while (l1 != nullptr || l2 != nullptr){
            if(l1 != nullptr) carry += l1->val;
            if(l2 != nullptr) carry += l2->val;
            now->next = new ListNode(carry % 10);
            carry = carry / 10;
            now = now->next;
            if(l1 != nullptr) l1 = l1->next; //如果還有才能換下一筆
            if(l2 != nullptr) l2 = l2->next;
        }
        if(carry) now->next = new ListNode(carry);
        return ans->next;
        //樓下版本無法處理「長度不同」的狀況
        //while( l1 != nullptr && l2 != nullptr ){
        //  in val = l1->val + l2->val +carry;
        //  now->next = new ListNode(val %10);
        //  carry
        //  now = now ->next;
        //  l1 = l1->next;
        //  l2 = l2->next;
        //}
        //return ans;
    }
};

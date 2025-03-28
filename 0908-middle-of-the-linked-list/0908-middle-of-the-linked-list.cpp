/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* tail=head;
        while(tail!=nullptr){
            cnt++;
            tail=tail->next;
            
        }
        if(cnt==1){
            return head;
        }
        tail=head;
        for(int i=1;i<(cnt/2);i++){
            tail=tail->next;

        }
        return tail->next;
    }
};
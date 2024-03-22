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
    bool isPalindrome(ListNode* head) {
        vector<int> seq ;
        ListNode * dummy = head ;

        while(dummy){
            seq.push_back(dummy->val) ;
            dummy = dummy->next ;
        }

        reverse(seq.begin(),seq.end()) ;
        dummy = head ;
        int i = 0 ;
        while(dummy){
            if(dummy->val != seq[i]){
                return 0 ;
            }
            dummy = dummy->next ; i++ ;
        }
        return true ;
    }
};
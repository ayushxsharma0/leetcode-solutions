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
        // space = O(n)
        // vector<int> seq ;
        // ListNode * dummy = head ;

        // while(dummy){
        //     seq.push_back(dummy->val) ;
        //     dummy = dummy->next ;
        // }

        // reverse(seq.begin(),seq.end()) ;
        // dummy = head ;
        // int i = 0 ;
        // while(dummy){
        //     if(dummy->val != seq[i]){
        //         return 0 ;
        //     }
        //     dummy = dummy->next ; i++ ;
        // }
        // return true ;

        //constant space 
        ListNode * fast = head ;
        ListNode * slow = head ;

        while(fast && fast->next){
            fast = fast->next->next ;
            slow = slow->next ;
        }
        //for odd numbered list
        if(fast) slow = slow->next ;
        ListNode * back = reverseList(slow) ;

        while(back && head){
            if(back->val != head->val){
                return 0 ;
            }
            back = back->next ;
            head = head->next ;
        }
        return 1 ;
    }
    ListNode* reverseList(ListNode* node) {
        if (node==NULL || node->next==NULL) return node;
        ListNode* cur=node, *Next, *prev=NULL;
        while(cur!=NULL){
            Next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=Next;
        }
        return prev;
    }
};
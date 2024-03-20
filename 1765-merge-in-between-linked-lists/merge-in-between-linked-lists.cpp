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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(!list1) return nullptr ;
        ListNode * start =  list1 ;
        ListNode * end =  list1 ;

        while(a-1){
            start = start->next;
            a-- ;
        }
        while(b){
            end = end->next ;
            b-- ;
        }
        start->next= list2 ;
        ListNode * dummy = list2 ;
        while(dummy->next){
            dummy= dummy->next ;
        }
        dummy->next = end->next ;

        return list1 ;
    }   
};
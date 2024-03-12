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
    ListNode* removeZeroSumSublists(ListNode* head) {
        //O(n2) approach
        ListNode* first = new ListNode(0,head) ;
        ListNode* start = first ;   

        while(start){
            //get prefix sum and iterate for each node
            int prefixsum = 0 ;
            ListNode* end = start->next ;

            while(end){
                prefixsum += end->val ;

                if(prefixsum == 0){
                    start->next = end->next ;
                }
                end = end->next ;
            }
            start = start->next ;
        }
        return first->next ;
    }
};
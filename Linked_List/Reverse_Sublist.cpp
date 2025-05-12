//? Unoptimized code

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
    private:
        ListNode* reverseList(ListNode* head){
            if(head==NULL or head->next==NULL)return head;
    
            ListNode* first = NULL;
            ListNode* second = head;
            ListNode* third = head->next;
    
            while(third!=NULL){
    
                second->next = first;
    
                first = second;
                second = third;
                third = third->next;
            }
    
            second->next = first;
    
            return second;
        }
    public:
        ListNode* reverseBetween(ListNode* head, int left, int right) {
            
            ListNode dummy(0);
            dummy.next = head;
            ListNode* prev = &dummy;
    
            for(int i = 1;i<left;i++){
                prev = prev->next;
            }
    
            ListNode* start = prev->next;
            ListNode* end = start;
    
            for(int i = 0;i<right-left;i++){
                end = end->next;
            }
    
            ListNode* after = end->next;
    
            end->next = NULL;
    
            ListNode* reversed = reverseList(start);
    
            prev->next = reversed;
            start->next = after;
    
            return dummy.next;
    
        }
    };


//? Optimized code
//? terative one-pass sublist reversal wihtout extra space HEAD INSERTION
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
        ListNode* reverseBetween(ListNode* head, int left, int right) {
    
            if(right==left)return head;
    
            ListNode dummy(0);
            dummy.next = head;
            ListNode* prev = &dummy;
    
            for(int i = 1;i<left;i++){
                prev = prev->next;
            }
    
            ListNode* reverseStart = prev->next;
            ListNode* curr = reverseStart->next;
    
            for(int i = 1;i<=right-left;i++){
                reverseStart->next = curr->next;
                curr->next = prev->next;
                prev->next = curr;
                curr = reverseStart->next;
            }
    
            return dummy.next;   
        }
    };

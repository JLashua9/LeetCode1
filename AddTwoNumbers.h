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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int carry = 0;

        while (l1||l2||carry){ //WHile l1l12carry are not empty
            int sum = carry; //sum equals the carry bit from previous iteraion

            if(l1){
                sum += l1->val; //add the value of l1 to sum
                l1 = l1->next; // get the next node in l1
            }
            if(l2){
                sum += l2->val; //add the value of l1 to sum
                l2 = l2->next; // get the next node in l1
            }

            carry = sum/10;
            int digit = sum%10; // Gets the current digit

            ListNode* newNode = new ListNode(digit); // Creating a new node

            if(!head){
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = tail->next;


            }

        }
        return head;

    };

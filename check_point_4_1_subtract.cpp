/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* findMiddle(ListNode* fast, ListNode* slow){
    if((fast -> next != NULL) && (fast -> next -> next)!= NULL) {
        findMiddle(fast->next->next, slow->next);
    } else return slow->next;
}

//reverse
/*void reverse(ListNode** A){
 ListNode* current = *A;
 ListNode* prev = NULL;
 ListNode* next;
 while (current != NULL)
 {
 next  = current->next;
 current->next = prev;
 prev = current;
 current = next;
 }
 *A = prev;
 }
 */


void sub(ListNode* head, vector<int> a) {
    for(int i=a.size()-1; i >= 0; i--) {
        head-> val = a[i] - (head -> val);
        head = head -> next;
    }
}

ListNode* Solution::subtract(ListNode* A) {
    //find the length
    ListNode* middle = findMiddle(A,A);
    vector<int> stack;
    //reverse(middle,&stack);
    ListNode* ptr = middle;
    while(ptr!=NULL) {
        stack.push_back(ptr->val);
        ptr= ptr -> next;
    }
    sub(A,stack);
    return A;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

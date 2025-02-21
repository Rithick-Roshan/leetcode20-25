/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // struct ListNode dummy;
    // struct ListNode *tail = &dummy;
    // dummy.next = NULL;

    // // Merge while both lists have nodes
    // while (list1 != NULL && list2 != NULL) {
    //     if (list1->val <= list2->val) {
    //         tail->next = list1;
    //         list1 = list1->next;
    //     } else {
    //         tail->next = list2;
    //         list2 = list2->next;
    //     }
    //     tail = tail->next;
    // }

    // // Append remaining nodes of list1 or list2
    // if (list1 != NULL) {
    //     tail->next = list1;
    // } else {
    //     tail->next = list2;
    // }

    // return dummy.next;

    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }

    if(list1->val<=list2->val){
        list1->next=mergeTwoLists(list1->next,list2);
        return list1;
    }
    else{
        list2->next=mergeTwoLists(list2->next,list1);
        return list2;
    }

}
#include <iostream.h>
#include <assert.h>
#include "lists.h"

ListNode::ListNode (const int k) {
    value = k;
    next = 0;
}

ListNode::ListNode (const int k, const ListNode* ptr) {
    value = k;
    next = ptr;
}

// Delete the node and all nodes accessible through it.
// Precondition: this != 0.
ListNode::~ListNode () {
    // this version is buggy
    cout << "Deleting node with value " << value << endl;
    for (ListNode* p=this; p!=0; p=p->next) {
	delete p;
    }
}

// Print the list.
void ListNode::Print () {
    ListNode* list = this;
    for (; list; list = list->Rest()) {
	cout << list->First() << " ";
    }
    cout << endl;
}

// Return the value stored in the node.
int ListNode::First () {
    return value;
}

// Return the list of the remaining elements.
ListNode* ListNode::Rest () {
    return next;
}

/*
problem link: https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem?isFullScreen=true

Delete the node at a given position in a linked list and return a reference to the head node. The head is at position 0. The list may be empty after you delete the node. In that case, return a null value.

Example



After removing the node at position , .

Function Description

Complete the deleteNode function in the editor below.

deleteNode has the following parameters:
- SinglyLinkedListNode pointer llist: a reference to the head node in the list
- int position: the position of the node to remove

Returns
- SinglyLinkedListNode pointer: a reference to the head of the modified list

Input Format

The first line of input contains an integer , the number of elements in the linked list.
Each of the next  lines contains an integer, the node data values in order.
The last line contains an integer, , the position of the node to delete.

Constraints

, where  is the  element of the linked list.
Sample Input

8
20
6
2
19
7
4
15
9
3
Sample Output

20 6 2 7 4 15 9
Explanation

The original list is . After deleting the node at position , the list is .

*/

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if(position==0){
        SinglyLinkedListNode* temp=llist;
        llist=llist->next;
        temp->next=NULL;
        delete temp;        
    }
    else{
        SinglyLinkedListNode* curr=llist;
        SinglyLinkedListNode* prev=NULL;
        int cnt=1;
        while (cnt<=position) {
            cnt++;
            prev=curr;
            curr=curr->next;        
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    return llist;
}

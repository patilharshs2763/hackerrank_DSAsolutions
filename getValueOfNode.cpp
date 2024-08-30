/*
Problem link:https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem?isFullScreen=true
Given a pointer to the head of a linked list and a specific position, determine the data value at that position. Count backwards from the tail node. The tail is at postion 0, its parent is at 1 and so on.

Example
 refers to 

Each of the data values matches its distance from the tail. The value  is at the desired position.

Function Description

Complete the getNode function in the editor below.

getNode has the following parameters:

SinglyLinkedListNode pointer head: refers to the head of the list
int positionFromTail: the item to retrieve
Returns

int: the value at the desired position
Input Format

The first line contains an integer , the number of test cases.

Each test case has the following format:
The first line contains an integer , the number of elements in the linked list.
The next  lines contains an integer, the data value for an element of the linked list.
The last line contains an integer , the position from the tail to retrieve the value of.

Constraints

, where  is the  element of the linked list.
Sample Input

2
1
1
0
3
3
2
1
2
Sample Output

1
3
Explanation

In the first case, there is one element in linked list with a value of 1. The last (only) element contains 1.

In the second case, the list is . The element with position of 2 from tail contains 3.

*/
int count(SinglyLinkedListNode* head){
    if(head==NULL){
        return 0;
    }
    SinglyLinkedListNode* temp=head;
    int cnt=0;
    while (temp!=NULL) {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int size=count(llist);
    if(positionFromTail==size){
        return llist->data;
    }
    int in=size-positionFromTail-1;
    SinglyLinkedListNode* temp=llist;
    int checked=0;
    while (temp!=NULL) {
        if(in==checked){
            return temp->data;
        }
        checked++;
        temp=temp->next;
    }
    return -1;
}

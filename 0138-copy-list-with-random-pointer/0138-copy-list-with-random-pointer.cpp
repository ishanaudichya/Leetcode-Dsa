/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head){
            return nullptr;
        }
        Node *curr= head;
        while(curr){
            Node *newnode = new Node(curr->val);
            newnode->next = curr->next;
            curr->next = newnode;
            curr = curr->next->next;
        }
        curr = head;
        while(curr){
            if(curr->random){
            curr->next->random = curr->random->next;
            }
            curr=curr->next->next;
        }
        Node* iter = head;
        Node* phead = new Node(0);
        Node* copy = phead;
        while(iter){
            Node *front = iter->next->next;
            copy->next = iter->next;
            iter->next = front;
            copy=copy->next;
            iter=iter->next;

        }
        return phead->next;
    }
};
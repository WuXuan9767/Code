#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int main(){
    ListNode* n0 = new ListNode(1);
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(5);
    ListNode* n4 = new ListNode(4);

    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // cout << n0->val << endl;
    // cout << n1->val << endl;
    // cout << n2->val << endl;
    // cout << n3->val << endl;
    // cout << n4->val << endl;

    // cout << n0->next << endl;
    // cout << n1->next << endl;
    // cout << n2->next << endl;
    // cout << n3->next << endl;
    // cout << n4->next << endl;

    // cout << n0<<endl;
    // cout << n1<<endl;
    // cout << n2<<endl;
    // cout << n3<<endl;
    // cout << n4<<endl;
    ListNode* P = new ListNode(8);
    P->next=n2;
    n1->next=P;

}

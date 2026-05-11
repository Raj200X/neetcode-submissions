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

        vector<int> a1;
        vector<int> a2;

        ListNode* temp = l1;
        while (temp != NULL) {
            a1.push_back(temp->val);
            temp = temp->next;
        }

        ListNode* temp2 = l2;
        while (temp2 != NULL) {
            a2.push_back(temp2->val);
            temp2 = temp2->next;
        }

        // reverse(a1.begin(), a1.end());
        // reverse(a2.begin(), a2.end());

        vector<int> ans;

        int i = 0;
        int carry = 0;

        while (i < a1.size() || i < a2.size() || carry) {

            int sum = carry;

            if (i < a1.size())
                sum += a1[i];

            if (i < a2.size())
                sum += a2[i];

            ans.push_back(sum % 10);

            carry = sum / 10;

            i++;
        }

        ListNode dummy(0);
        ListNode* curr = &dummy;

        for (int i = 0; i < ans.size(); i++) {
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }

        return dummy.next;
    }
};
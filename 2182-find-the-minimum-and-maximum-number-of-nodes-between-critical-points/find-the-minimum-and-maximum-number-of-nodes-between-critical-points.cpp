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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>result= {-1,-1};
        int mindistance=INT_MAX;
        ListNode* prev=head;
        ListNode* curr=head->next;
        int currentindex=1;
        int previous_index=-1;
        int first_index=0;
        while(curr->next!=nullptr){
            if((curr->next->val > curr->val && prev->val > curr->val)||(curr->next->val < curr->val && prev->val < curr->val)){
                    if (previous_index == -1) {
                    previous_index = currentindex;
                    first_index = currentindex;
                }
                else {
                    // Calculate the minimum distance between critical points
                    mindistance =
                        min(mindistance, currentindex - previous_index);
                    previous_index = currentindex;
                }
            }
            currentindex++;
            prev=curr;
            curr=curr->next;
        }
         if (mindistance != INT_MAX) {
            int maxdistance = previous_index - first_index;
            result = {mindistance, maxdistance};
        }
        return result;
    }
};
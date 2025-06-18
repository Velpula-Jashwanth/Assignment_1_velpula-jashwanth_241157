class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        while(head){
            arr.push_back(head->val);
            head=head->next;
        }
        int c=0;
        for(int i=0;i<(arr.size())/2;i++){
                if(arr[i]==arr[(arr.size())-1-i]) c++;
        }
        return c==arr.size()/2;
    }
};

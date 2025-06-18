class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        stack<int> st;
        for(int num:nums2){
            while(!st.empty() && num>st.top()){
                map[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
        while(!st.empty()){
            map[st.top()]=-1;
            st.pop();
        }
        vector<int> arr;
        for(int num:nums1){
            arr.push_back(map[num]);
        }
        return arr;
}
};

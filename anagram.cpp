vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string, vector<int>> anagram_map;
    for (int i = 0; i < A.size(); ++i) {
        string sorted_str = A[i];
        sort(sorted_str.begin(), sorted_str.end());
        anagram_map[sorted_str].push_back(i + 1);  
    }
    vector<vector<int>> result;
    for (auto& pair : anagram_map) {
        result.push_back(pair.second);  
    }
    return result;
}

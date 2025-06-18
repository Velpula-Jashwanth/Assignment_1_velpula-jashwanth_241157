vector<int> Solution::twoSum(const vector<int>& numbers, int target) {
    unordered_map<int, int> num_to_index;
    vector<int> result;
    bool found = false;
    int best_index1 = 0, best_index2 = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        int complement = target - numbers[i];
        if (num_to_index.count(complement)) {
            int j = num_to_index[complement];
            int index1 = j + 1;
            int index2 = i + 1;
            if (index1 > index2) swap(index1, index2);

            if (!found || index2 < best_index2 || (index2 == best_index2 && index1 < best_index1)) {
                best_index1 = index1;
                best_index2 = index2;
                found = true;
            }
        }

        if (!num_to_index.count(numbers[i])) {
            num_to_index[numbers[i]] = i;
        }
    }

    if (found) return {best_index1, best_index2};
    return {};
}

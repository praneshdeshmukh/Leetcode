
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> counts;

        // Iterating through the array and updating the counts in the unordered_map.
        for (int i : arr) {
            counts[i]++;
        }

        // Creating an unordered_set to store the counts of occurrences.
        unordered_set<int> occurrenceSet;

        // Iterating through the values in the unordered_map and checking for uniqueness.
        for (const auto& kv : counts) {
            // If the count is already present in the unordered_set, returning false.
            if (occurrenceSet.count(kv.second)) {
                return false;
            }
            // Otherwise, adding the count to the unordered_set.
            occurrenceSet.insert(kv.second);
        }

        // If the loop completes without returning false, returning true.
        return true;
    }
};


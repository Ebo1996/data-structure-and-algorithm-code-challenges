class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (words.empty() || s.empty()) return result;

        int word_len = words[0].size();
        int word_count = words.size();
        int total_len = word_len * word_count;

        if (s.size() < total_len) return result;

        unordered_map<string, int> word_map;
        for (auto& w : words) {
            word_map[w]++;
        }

        // Try each offset
        for (int i = 0; i < word_len; i++) {
            int left = i;
            int right = i;
            unordered_map<string, int> window_count;
            int count = 0;

            while (right + word_len <= s.size()) {
                string word = s.substr(right, word_len);
                right += word_len;

                if (word_map.find(word) != word_map.end()) {
                    window_count[word]++;
                    count++;

                    // If more than needed, shrink from left
                    while (window_count[word] > word_map[word]) {
                        string left_word = s.substr(left, word_len);
                        window_count[left_word]--;
                        count--;
                        left += word_len;
                    }

                    // If exactly matches
                    if (count == word_count) {
                        result.push_back(left);
                    }
                } else {
                    // Reset window
                    window_count.clear();
                    count = 0;
                    left = right;
                }
            }
        }

        return result;
    }
};

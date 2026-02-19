class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        std::sort(intervals.begin(), intervals.end());

        std::vector<std::vector<int>> answers;

        int n = intervals.size();
        for (int i = 0; i < n; i++) {
            auto start = intervals[i][0];

            int maxEnd=intervals[i][1];


            while (i < n - 1 && maxEnd >= intervals[i + 1][0]) {
                maxEnd=std::max(intervals[i+1][1],maxEnd);
                i++;
            }

            auto end = maxEnd;
            answers.push_back({start, end});
        }

        return answers;
    }
};
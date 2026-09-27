class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> answer;

        for (int i = 0; i < nums1.size(); i++) {

            int j = 0;

            // Find nums1[i] in nums2
            while (j < nums2.size() && nums2[j] != nums1[i]) {
                j++;
            }

            // Start searching after that element
            j++;

            bool found = false;

            while (j < nums2.size()) {

                if (nums2[j] > nums1[i]) {
                    answer.push_back(nums2[j]);
                    found = true;
                    break;
                }

                j++;
            }

            if (!found) {
                answer.push_back(-1);
            }
        }

        return answer;
    }
};
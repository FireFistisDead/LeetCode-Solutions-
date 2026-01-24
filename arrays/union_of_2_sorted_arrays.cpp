class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> res;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                if (res.empty() || res.back() != nums1[i])
                    res.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j]) {
                if (res.empty() || res.back() != nums1[i])
                    res.push_back(nums1[i]);
                i++;
            }
            else {
                if (res.empty() || res.back() != nums2[j])
                    res.push_back(nums2[j]);
                j++;
            }
        }

        while (i < nums1.size()) {
            if (res.empty() || res.back() != nums1[i])
                res.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size()) {
            if (res.empty() || res.back() != nums2[j])
                res.push_back(nums2[j]);
            j++;
        }

        return res;
    }
};

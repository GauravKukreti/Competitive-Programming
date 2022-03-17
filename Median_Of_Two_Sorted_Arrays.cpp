class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        for (int i = 0; i < nums2.size(); i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        double median;
        int len = nums1.size();

        if (len % 2 == 0)
        {
            median = (float)(nums1[len / 2] + nums1[len / 2 - 1]) / 2;
        }
        else
        {
            median = nums1[len / 2];
        }
        return median;
    }
};
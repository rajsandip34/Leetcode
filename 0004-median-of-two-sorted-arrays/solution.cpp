class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {

        if (A.size() > B.size())
            return findMedianSortedArrays(B, A);

        int n = A.size();
        int m = B.size();

        int low = 0;
        int high = n;

        int left = (n + m + 1) / 2;

        while (low <= high) {

            int cut1 = (low + high) / 2;
            int cut2 = left - cut1;

            int L1 = (cut1 == 0) ? INT_MIN : A[cut1 - 1];
            int R1 = (cut1 == n) ? INT_MAX : A[cut1];

            int L2 = (cut2 == 0) ? INT_MIN : B[cut2 - 1];
            int R2 = (cut2 == m) ? INT_MAX : B[cut2];

            if (L1 <= R2 && L2 <= R1) {

                if ((n + m) % 2)
                    return max(L1, L2);

                return (max(L1, L2) + min(R1, R2)) / 2.0;
            }

            if (L1 > R2)
                high = cut1 - 1;
            else
                low = cut1 + 1;
        }

        return 0;
    }
};

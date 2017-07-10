int findingConsecutiveSubSeq(const vector<int> &A)
{
    set<int> set;
    int maxSeq = 0;
    
    for (int i = 0; i < A.size(); i++)
        set.insert(A[i]);
    
    for (int i=0; i<A.size(); i++)
    {
        int index = A[i];
        if (set.find(index-1) == set.end())
        {
            while (set.find(index) != set.end())
                index++;
            maxSeq = max(maxSeq, index - A[i]);
        }
    }
    return maxSeq;
}

int Solution::longestConsecutive(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return findingConsecutiveSubSeq(A);
}

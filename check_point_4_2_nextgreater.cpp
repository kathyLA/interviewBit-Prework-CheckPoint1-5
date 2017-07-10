vector<int> Solution::nextGreater(vector<int> &A) {
    vector <int> result (A.size(), -1);
    vector<int> stack ;
    for (int i = 0; i < A.size(); i++) {
        int height = A[i];
        
        while ( (stack.size() > 0)  && ( height > A[stack.back()] ) ) {
            result[stack.back()] = height;
            stack.pop_back();
        }
        stack.push_back(i);
    }
    
    return result;
}
